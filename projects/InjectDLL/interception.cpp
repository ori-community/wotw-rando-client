#include "pch.h"
#include "interception.h"
#include "common.h"
#include <detours/detours.h>

intercept* last_intercept = nullptr;
__int64 game_assembly_address;

__int64 resolve_rva(__int64 rva) {
	if(!game_assembly_address)
		game_assembly_address = (__int64)GetModuleHandleA("GameAssembly.dll");

	return game_assembly_address + rva;
}

void interception_init() {
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());

	auto current = last_intercept;
	while(current)
	{
		//debug("Binding: " + current->name + " (+" + std::to_string(current->offset) + ")");
		*current->original_pointer = reinterpret_cast<PVOID*>(resolve_rva(current->offset));
		if(current->intercept_pointer)
		{
			debug("Intercepting: " + current->name + " @ " + std::to_string(reinterpret_cast<__int64>(current->original_pointer)) + " -> " + std::
				  to_string((__int64)current->intercept_pointer));
			
			const auto result = DetourAttach(current->original_pointer, current->intercept_pointer);
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
		if(current->intercept_pointer)
			DetourDetach(current->original_pointer, current->intercept_pointer);

		current = current->prev;
	}
}

intercept::intercept(__int64 o, PVOID* oP, PVOID iP, std::string s)
	: name(std::move(s))
	, offset(o)
	, original_pointer(oP)
	, intercept_pointer(iP)
{
	prev = last_intercept;
	last_intercept = this;
}
