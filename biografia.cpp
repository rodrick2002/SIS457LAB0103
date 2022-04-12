// Fill out your copyright notice in the Description page of Project Settings.


#include "biografia.h"

// Sets default values for this component's properties
Ubiografia::Ubiografia()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
// este es mi intento de hacerlo en unreal como es la version 5 aun no la entiendo
void Ubiografia::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hola que tal"));
	UE_LOG(LogTemp, Warning, TEXT("Mi nombre es Rodrigo Llawar Condori Avendaño"));
	UE_LOG(LogTemp, Warning, TEXT("Naci el 4 de diciembre del año 2002 en sucre en el hospital de lajastambo "));
	UE_LOG(LogTemp, Warning, TEXT("Actualmente tengo 19 años, vivo con mis padres y mis dos hermanos "));
	UE_LOG(LogTemp, Warning, TEXT("Estudie en el colegio San vicente de Paul...y actualmente estudio en la USFX"));
	UE_LOG(LogTemp, Warning, TEXT("Trabajo atendiendo una cancha de futbol"));
	UE_LOG(LogTemp, Warning, TEXT("Me encanta dibujar , es mi pasatiempo"));
	UE_LOG(LogTemp, Warning, TEXT("Me gusta el futbol el voley y el box, ademas de jugar videojuegos"));
	UE_LOG(LogTemp, Warning, TEXT("Eso fue un resumen de mi vida"));
	UE_LOG(LogTemp, Warning, TEXT("Si quieres verlo de nuevo pulsa 1 y si no 0"));


	// ...
	
}


// Called every frame
void Ubiografia::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

