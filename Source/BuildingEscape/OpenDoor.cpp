// Copyright varomix MIXStudio 2016

#include "BuildingEscape.h"
#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

    //aRotation = GetOwner()->GetActorRotation();
    //aRotation.Yaw = 90;
    //GetOwner()->SetActorRotation(aRotation);

    //faster way
    //FRotator NewRotation = FRotator(0.f, -60.0f, 0.f);
    GetOwner()->SetActorRotation(FRotator(0.f, -120.0f, 0.f));
}


// Called every frame
void UOpenDoor::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );


}

