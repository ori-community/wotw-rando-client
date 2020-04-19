#include "pch.h"
#include "interception.h"
#include "common.h"
#include "detours.h"

intercept* last_intercept = nullptr;

__int64 gameAssemblyAddress;
__int64 resolve_rva(__int64 rva) {
	if(!gameAssemblyAddress)
		gameAssemblyAddress = (__int64)GetModuleHandleA("GameAssembly.dll");

	return gameAssemblyAddress + rva;
}
void interception_init() {
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());

	auto current = last_intercept;
	while(current)
	{
		debug("Binding: " + current->name + " (+" + std::to_string(current->offset) + ")");
		*current->originalPointer = (PVOID*)resolve_rva(current->offset);
		if(current->interceptPointer)
		{
			debug("Intercepting: " + current->name + " @ " + std::to_string((__int64)current->originalPointer) + " -> " + std::
				  to_string((__int64)current->interceptPointer));
			
			const auto result = DetourAttach(current->originalPointer, current->interceptPointer);
			if(result)
				error("Error attaching " + current->name + ": " + std::to_string(result));
			else
				debug("Attach success");
		}
		current = current->prev;
	}

	const auto result = DetourTransactionCommit();
	if(result)
		error("Error during inject commit: " + std::to_string(result));
	else
		debug("Injection completed");	
}

void interception_detach() {
	auto current = last_intercept;
	while(current)
	{
		if(current->interceptPointer)
			DetourDetach(current->originalPointer, current->interceptPointer);
		current = current->prev;
	}
}