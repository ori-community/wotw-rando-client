// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "detours.h"
#include "PEModule.h"
#include "common.h"
#include "dllmain.h"

#include <string>
#include <iostream>
#include <unordered_map>
#include <fstream>
#include <utility>


//--------------------------Common Function Types--------------------------
typedef int (*_INTFUNC)();

typedef void (*MEMBER_FUNCTION)(__int64 thisPtr);
typedef void (*PICKUP_FUN)(__int64 thisPtr, __int64 pickupPtr);
typedef int (*GET_INT_FUN)(__int64 thisPtr);
typedef __int64 (*GET_PTR_FUN)(__int64 thisPtr);
typedef void (*SET_INT_FUN)(__int64 thisPtr, int value);
typedef __int64 (*SET_AND_RETURN_ENUM_FUN)(__int64 thisPtr, unsigned __int8 value);
typedef void (*SET_ENUM_FUN)(__int64 thisPtr, unsigned __int8 value);
typedef __int64 (*ADD_SHARD_SIG)(__int64 thisPtr, unsigned __int8 value);
typedef __int64 (*SUB_182C8D3A0_DICT_SIG)(__int64 thisPtr, unsigned __int8 value, __int64 something);
typedef void (*SET_FLOAT_FUN)(__int64 thisPtr, float value);


//---------------------------------------------------Globals-----------------------------------------------------
bool lock = false;
__int64 lastSeinEnergy;
__int64 lastHealthController;

void* gameControllerInstancePointer = NULL;

InjectDLL::PEModule* CSharpLib = NULL;
std::string logFilePath = "C:\\moon\\inject_log.txt"; // change this if you need to
std::ofstream logfile;

//-------------------------------------------Magic Convenience Macro----------------------------------------------

intercept* lastIntercept = 0;

struct intercept
{
	intercept(__int64 o, PVOID* oP, PVOID iP, std::string s) : name(std::move(s)), offset(o), originalPointer(oP),
	                                                           interceptPointer(iP)
	{
		prev = lastIntercept;
		lastIntercept = this;
	}

	std::string name;
	__int64 offset;
	PVOID* originalPointer;
	PVOID interceptPointer;
	intercept* prev;
};

#define concat_(a, b) a ## b
#define concat(a, b) concat_(a, b)
#define INTERCEPT(address, type, returnType, name, ...) \
	type name; \
	returnType name##Intercept __VA_ARGS__ \
	intercept binding_##name (address, &(PVOID&) name, name##Intercept, #name);
#define BINDING(address, type, name) \
	type name; \
	intercept binding_##name (address, &(PVOID&) name, 0, #name);
#define LOCK(value) if(lock) {return value;};

//---------------------------------------------------------Intercepts----------------------------------------------------------

#define OFFSET_BASE 0x180000000
BINDING(0x5C06C0, MEMBER_FUNCTION, createCheckpoint) //GameController::createCheckpoint

INTERCEPT(0x5D5950, PICKUP_FUN, void, onCollectHealthHalfCell, (__int64 thisPointer, __int64 pickupPointer){
          //SeinPickupProcessor::onCollectHealthHalfCell
          lock = true;
          onCollectHealthHalfCell(thisPointer, pickupPointer);
          lock = false;
          })

INTERCEPT(0x5D3DD0, PICKUP_FUN, void, onCollectEnergyHalfCell, (__int64 thisPointer, __int64 pickupPointer)
          {
          //SeinPickupProcessor::onCollectEnergyHalfCell
          lock = true;
          onCollectEnergyHalfCell(thisPointer, pickupPointer);
          lock = false;
          })

INTERCEPT(0x5D6400, PICKUP_FUN, void, onCollectSpiritShard, (__int64 thisPointer, __int64 pickupPointer){
          //SeinPickupProcessor::onCollectSpiritShard
          lock = true;
          onCollectSpiritShard(thisPointer, pickupPointer);
          lock = false;
          })

INTERCEPT(0x5D3440, PICKUP_FUN, void, onCollectSpiritShardSlot, (__int64 thisPointer, __int64 pickupPointer){
          lock = true;
          onCollectSpiritShardSlot(thisPointer, pickupPointer);
          lock = false;
          })

INTERCEPT(0x5D4470, PICKUP_FUN, void, onCollectOre, (__int64 thisPointer, __int64 pickupPointer){
          lock = true;
          onCollectOre(thisPointer, pickupPointer);
          lock = false;
          })

INTERCEPT(0x5D5360, PICKUP_FUN, void, onCollectKeystone, (__int64 thisPointer, __int64 pickupPointer){
          lock = true;
          onCollectKeystone(thisPointer, pickupPointer);
          lock = false;
          })

INTERCEPT(0xA0AF60, ADD_SHARD_SIG, __int64, addShard, (__int64 thisPtr, unsigned __int8 enumValue){
          //PlayerSpiritShards::AddShard
          if (lock)
          {
          __int64 result = addShard(thisPtr, enumValue);
          if (result)
          {
          //Rollback if shard was new
          *(bool*)(result + 24) = false;
          *(bool*)(result + 25) = false;
          }
          return result;
          }
          return addShard(thisPtr, enumValue);
          })
INTERCEPT(0xA0ADE0, MEMBER_FUNCTION, void, addGlobalShardSlot, (__int64 thisPtr, unsigned __int8 enumValue){
          //PlayerSpiritShards::AddGlobalShardSlot
          LOCK()
          addGlobalShardSlot(thisPtr);
          })

INTERCEPT(0x1230150, SET_INT_FUN, void, setBaseMaxHealth, (__int64 thisPtr, int val){
          //SeinHealthController::SetBaseMaxHealth (?)
          LOCK()
          setBaseMaxHealth(thisPtr, val);
          })

INTERCEPT(0xDEA1F0, SET_INT_FUN, void, setBaseMaxEnergy, (__int64 thisPtr, int val)
          {
          //SeinEnergy::SetBaseMaxEnergy (?)
          LOCK()
          setBaseMaxEnergy(thisPtr, val);
          })
INTERCEPT(0x4943A0, SET_INT_FUN, void, setPartialHealthContainers, (__int64 thisPtr, int amount){
          //SeinLevel::setPartialHealthContainers
          LOCK()
          setPartialHealthContainers(thisPtr, amount);
          })

INTERCEPT(0x4942E0, GET_INT_FUN, int, getPartialHealthContainers, (__int64 thisPtr){
          //SeinLevel::getPartialHealthContainers
          LOCK(1)
          return getPartialHealthContainers(thisPtr);
          })

INTERCEPT(0x494530, SET_INT_FUN, void, setPartialEnergyContainers, (__int64 thisPtr, int amount){
          //SeinLevel::setPartialEnergyContainers
          LOCK()
          setPartialEnergyContainers(thisPtr, amount);
          })

INTERCEPT(0x494470, GET_INT_FUN, int, getPartialEnergyContainers, (__int64 thisPtr){
          //SeinLevel::getPartialEnergyContainers
          LOCK(1)
          return getPartialEnergyContainers(thisPtr);
          })

INTERCEPT(0x494210, SET_INT_FUN, void, setOre, (__int64 thisPtr, int amount){
          //SeinLevel::setOre
          LOCK()
          setOre(thisPtr, amount);
          })

INTERCEPT(0x494080, SET_INT_FUN, void, setExperience, (__int64 thisPtr, int amount){
          //SeinLevel::setExperience
          LOCK()
          setExperience(thisPtr, amount);
          })

INTERCEPT(0x487220, SET_INT_FUN, void, setKeystones, (__int64 thisPtr, int partials){
          //SeinInventory::setKeystones
          LOCK()
          setKeystones(thisPtr, partials);
          })

INTERCEPT(0x5D4EE0, PICKUP_FUN, void, onCollectExpOrb, (__int64 thisPointer, __int64 pickupPointer){
          //SeinPickupProcessor::onCollectExpOrb
          char messageBoxType = *(char*)(pickupPointer + 0xA8);
          if (messageBoxType) //Any non-enemy exp drop has an associated messageBox
          {
          lock = true;
          }
          onCollectExpOrb(thisPointer, pickupPointer);
          lock = false;
          })

INTERCEPT(0x5BE620, MEMBER_FUNCTION, void, fixedUpdate1, (__int64 thisPointer){
          fixedUpdate1(thisPointer);
          if (gameControllerInstancePointer != (void*)thisPointer)
          {
          logfile.open(logFilePath, std::ios_base::app);
          logfile << "got GameController.Instance pointer: " << thisPointer << std::endl;
          logfile.close();
          gameControllerInstancePointer = (void*)thisPointer;
          }
          try
          {
          int update = CSharpLib->call<int>("Update");
          if (update == 1)
          {
          log("Checkpoint requested by c# code");
          createCheckpoint((__int64)gameControllerInstancePointer);
          }
          }
          catch (int error)
          {
          logfile.open(logFilePath, std::ios_base::app);
          logfile << "got error code " << error << std::endl;
          logfile.close();
          }
          })

//-------------------------------------------------------Attaching---------------------------------------------------

__int64 start;

void initAll()
{
	start = (__int64)GetModuleHandleA("GameAssembly.dll");
	intercept* next = lastIntercept;
	while (next)
	{
		intercept current = *next;
		log("Binding: " + current.name + " (+" + std::to_string(current.offset) + ")");
		*current.originalPointer = (PVOID*)(start + current.offset);
		next = current.prev;
	}
}

void attachAll()
{
    auto foo = &(PVOID&)fixedUpdate1;
    log("supposed: " + std::to_string((__int64)foo));

	intercept*next = lastIntercept;
	while (next)
	{
		intercept current = *next;
		if (current.interceptPointer)
		{
			log("attaching: " + current.name + " @ " + std::to_string((__int64)current.originalPointer) +" | " + std::to_string((__int64)*current.originalPointer) + " -> " + std::
				to_string((__int64)current.interceptPointer));
			auto result = DetourAttach(current.originalPointer, current.interceptPointer);
			log("result: " + std::to_string(result));
		}
		next = current.prev;
	}
}

void detachAll()
{
	intercept* next = lastIntercept;
	while (next)
	{
		intercept current = *next;
		if (current.interceptPointer)
			DetourDetach(current.originalPointer, current.interceptPointer);
		next = current.prev;
	}
}


//--------------------------------------------------------------Old-----------------------------------------------------------

void log(std::string message)
{
	std::ofstream logfile;
	logfile.open(logFilePath, std::ios_base::app);
	logfile << message << std::endl;
	logfile.close();
}

void initMemoryHacks()
{
	//hacky hack hack
	auto start = (__int64)GetModuleHandleA("GameAssembly.dll") + 0x5D3227;
	unsigned long dwOldProt = 0;
	VirtualProtect((LPVOID)start, 6, PAGE_EXECUTE_READWRITE, &dwOldProt);
	log("unprotected");
	for (int i = 0; i <= 5; i++)
	{
		log("Pre: " + std::to_string(*(unsigned __int8*)(start + i)));
		*(unsigned __int8*)(start + i) = 0x90;
		log("Post: " + std::to_string(*(unsigned __int8*)(start + i)));
	}
}


bool attached = false;
bool shutdown = false;

void MainThread()
{
	if (attached)
		return;
	attached = true;
	log("attached");
	CSharpLib = new InjectDLL::PEModule(_T("C:\\moon\\RandoMainDLL.dll"));
	if (CSharpLib->call<bool>("Initialize"))
	{
		log("c# init complete");
		return;
	}
	else
	{
		log("Failed to initialize, shutting down");
		shutdown = true;
		FreeLibraryAndExitThread(GetModuleHandleA("InjectDLL.dll"), 0);
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	if (DetourIsHelperProcess())
	{
		return TRUE;
	}
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
		log("init");
		initAll();
		initMemoryHacks();

		DetourRestoreAfterWith();
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());

		attachAll();
		log("inject commit: " + std::to_string(DetourTransactionCommit()));

		break;
	case DLL_PROCESS_DETACH:
		shutdown = true;
		delete CSharpLib;
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());

		detachAll();

		log("detatch commit: " + std::to_string(DetourTransactionCommit()));
		break;
	default:
		break;
		//std::ifstream f("C:\\moon\\inject.flag");
		//if (!f.good() && !shutdown) {
		//    shutdown = true;
		//    log("Shutdown time");
		//    FreeLibraryAndExitThread(GetModuleHandleA("InjectDLL.dll"), 0);
		//}
	}
	return TRUE;
}

extern "C" __declspec(dllexport)VOID NullExport(VOID)
{
}
