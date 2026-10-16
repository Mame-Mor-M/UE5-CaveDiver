#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AC_Fear.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FEARCAVE_API UAC_Fear : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_Fear();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
	void IncreaseFear(double deltaTime);

	UFUNCTION(BlueprintCallable)
	void DisableFear();

	UFUNCTION(BlueprintCallable)
	void ChangeFearRate(bool torchOn);

	UFUNCTION(BlueprintCallable)
	void DecreaseFear(double deltaTime);

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Default")
	double currentFear = 0.0;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Default")
	double maxFearLevel = 100.0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	double fearChangeRate = 1.0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	bool binSafeZone = true;
};
