// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "detours.h"
#include "PEModule.h"
#include "common.h"
#include <iostream>
#include <unordered_map>
#include <fstream>


#define OFFSET 0x8C29B0 // VC
#define SEIN_PICKUP_PROCESSOR_ON_COLLECTED_MAX_HEALTH_HALF_CONTAINER_PICKUP 0x5D5950
#define SEIN_LEVEL_SET_PARTIAL_HEALTH_CONTAINERS 0x4943A0
#define SEIN_LEVEL_GET_PARTIAL_ENERGY_CONTAINERS 0x494470
#define SEIN_LEVEL_SET_PARTIAL_ENERGY_CONTAINERS 0x494530
#define SEIN_HEALTH_CONTROLLER_SET_MAX_BASE 0x1230150
#define SEIN_ENERGY_SET_BASE_MAX_ENERGY 0xDEA1F0
#define SEIN_ENERGY_UPDATE 0xDEBA50


typedef int(*_INTFUNC)();
typedef void(*INT_CONSUMER)(__int64);
typedef void(*PICKUP_FUN)(__int64, __int64);
typedef int(*GET_INT_FUN)(__int64);
typedef void(*SET_INT_FUN)(__int64, int);
typedef void(*SET_FLOAT_FUN)(__int64, float);

// this stuff should probably be in a header file lol
SET_INT_FUN setBaseMaxEnergy;
SET_INT_FUN setBaseMaxHealth;
SET_INT_FUN setPartialHealthContainers;
SET_INT_FUN setPartialEnergyContainers;
SET_INT_FUN ogSetPartialEnergyContainers;
GET_INT_FUN getPartialEnergyContainers;
INT_CONSUMER energyCtor;
PICKUP_FUN hPointer;
__int64 lastSeinEnergy;
__int64 lastHealthController;

using namespace InjectDLL;

// ok so the basic idea here is to get rid of the get...Pointer functions and replace them with these
// Binding structures. Unfortunately it's late at night so that will have to wait
template <typename T>
struct Binding {
    int    address;
    T      originalFunc;
    T      boundFunc;
};


bool lock = false;
std::string logFilePath = "C:\\moon\\inject_log.txt"; // change this if you need to

std::ofstream logfile;

void log(std::string message) {
    logfile.open(logFilePath, std::ios_base::app);
    logfile << message << std::endl;
    logfile.close();
}


SET_INT_FUN getSetBaseMaxEnergyPointer()
{
    return (SET_INT_FUN)((uint64_t)GetModuleHandleA("GameAssembly.dll") + SEIN_ENERGY_SET_BASE_MAX_ENERGY);
}

INT_CONSUMER getEnergyCtorPointer()
{
    return (INT_CONSUMER)((uint64_t)GetModuleHandleA("GameAssembly.dll") + SEIN_ENERGY_UPDATE);
}

SET_INT_FUN getSetBaseMaxHealthPointer()
{
    return (SET_INT_FUN)((uint64_t)GetModuleHandleA("GameAssembly.dll") + SEIN_HEALTH_CONTROLLER_SET_MAX_BASE);
}



SET_INT_FUN getSetPartialEnergyContainers()
{
    return (SET_INT_FUN)((uint64_t)GetModuleHandleA("GameAssembly.dll") + SEIN_LEVEL_SET_PARTIAL_ENERGY_CONTAINERS);
}

GET_INT_FUN getGetPartialEnergyContainers()
{
    return (GET_INT_FUN)((uint64_t)GetModuleHandleA("GameAssembly.dll") + SEIN_LEVEL_GET_PARTIAL_ENERGY_CONTAINERS);
}

SET_INT_FUN getSetPartialHealthContainers()
{
    return (SET_INT_FUN)((uint64_t)GetModuleHandleA("GameAssembly.dll") + SEIN_LEVEL_SET_PARTIAL_HEALTH_CONTAINERS);
}

PICKUP_FUN getHPointer() {
    return (PICKUP_FUN)((uint64_t)GetModuleHandleA("GameAssembly.dll") + SEIN_PICKUP_PROCESSOR_ON_COLLECTED_MAX_HEALTH_HALF_CONTAINER_PICKUP);
}

void setBaseMaxHealthIntercept(__int64 thisPtr, int health)
{
    lastHealthController = thisPtr;
    if (lock)
        return;

    setBaseMaxHealth(thisPtr, health);
}
void setPartialEnergyContainersIntercept(__int64 thisPtr, int partials)
{
    setPartialEnergyContainers(thisPtr, partials);    
}

void setBaseMaxEnergyIntercept(__int64 thisPtr, int energy)
{
    lastSeinEnergy = thisPtr;
    if (lock)
        return;

    setBaseMaxEnergy(thisPtr, energy);
}
void energyCtorIntercept(__int64 thisPtr)
{
    if (lastSeinEnergy != thisPtr)
    {
        lastSeinEnergy = thisPtr;
    }
    energyCtor(thisPtr);
}
void setPartialHealthContainersIntercept(__int64 thisPtr, int partials)
{
    if(lock)
    {
        lock = false;
        log("intercepted health setter");
        ogSetPartialEnergyContainers(lastSeinEnergy, getPartialEnergyContainers(lastSeinEnergy) + 1);
        lock = true;
        return;    	
    }
	
    setPartialHealthContainers(thisPtr, partials);
}

void findPickupIntercept(__int64 thisPointer, __int64 pickupPointer)
{
    lock = true;
    hPointer(thisPointer, pickupPointer);
    lock = false;
}

void initPointers()
{
    setPartialHealthContainers = getSetPartialHealthContainers();
    setPartialEnergyContainers = getSetPartialEnergyContainers();
    ogSetPartialEnergyContainers = getSetPartialEnergyContainers();
    getPartialEnergyContainers = getGetPartialEnergyContainers();
	
	setBaseMaxHealth = getSetBaseMaxHealthPointer();
	setBaseMaxEnergy = getSetBaseMaxEnergyPointer();

    energyCtor = getEnergyCtorPointer();

    hPointer = getHPointer();
}

void detourIt()
{
    DetourAttach(&(PVOID&)hPointer, findPickupIntercept);
    DetourAttach(&(PVOID&)energyCtor, energyCtorIntercept); 
    DetourAttach(&(PVOID&)setPartialHealthContainers, setPartialHealthContainersIntercept); 
    DetourAttach(&(PVOID&)setPartialEnergyContainers, setPartialEnergyContainersIntercept); 
    DetourAttach(&(PVOID&)setBaseMaxHealth , setBaseMaxHealthIntercept);
    DetourAttach(&(PVOID&)setBaseMaxEnergy , setBaseMaxEnergyIntercept);
}
bool attached = false;
bool shutdown = false;

void MainThread() {
    if (attached)
        return;
    attached = true;
    log("attached");
    PEModule lib(_T("C:\\moon\\RandoMainDLL.dll"));
    if (lib.call<bool>("Initialize"))
        while (!shutdown) {
            try {
                int update = lib.call<int>("Update");
                logfile.open(logFilePath, std::ios_base::app);
                if (update < 0) {
                    logfile << "still loading: " << update << std::endl;
                }
                else {
                    logfile << "keystones: " << update << std::endl;
                }
                logfile.close();
            }
            catch (int error) {
                logfile.open(logFilePath, std::ios_base::app);
                logfile << "got message " << error << std::endl;
                logfile.close();
            }
            Sleep(1000);
        }
    else
        log("Failed to initialize :C");
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    if (DetourIsHelperProcess()) {
        return TRUE;
    }    
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
        log("inject start");
        initPointers();
    	
        DetourRestoreAfterWith();
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());        

        detourIt();
        DetourTransactionCommit();
        log("inject complete");

        break;
    case DLL_PROCESS_DETACH:
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
        log("detach start");

        DetourDetach(&(PVOID&)hPointer, findPickupIntercept); 
        DetourDetach(&(PVOID&)energyCtor, energyCtorIntercept);
        DetourDetach(&(PVOID&)setPartialHealthContainers, setPartialHealthContainersIntercept);
        DetourDetach(&(PVOID&)setPartialEnergyContainers, setPartialEnergyContainersIntercept);
        DetourDetach(&(PVOID&)setBaseMaxHealth, setBaseMaxHealthIntercept);
        DetourDetach(&(PVOID&)setBaseMaxEnergy, setBaseMaxEnergyIntercept);
    	
        log("detach complete");
        DetourTransactionCommit();
        break;
    default:
        std::ifstream f("C:\\moon\\inject.flag");
        if (!f.good() && !shutdown) {
            shutdown = true;
            log("Shutdown time");
            FreeLibraryAndExitThread(GetModuleHandleA("Dll.dll"), 0);
        }

    }
    return TRUE;
}

extern "C" __declspec(dllexport)VOID NullExport(VOID)
{
}