#include <interception.h>
#include <common.h>
#include <detours/detours.h>
#include <Common/ext.h>

#include <unordered_map>

intercept* first_intercept = nullptr;
intercept* last_intercept = nullptr;
__int64 game_assembly_address;

__int64 resolve_rva(__int64 rva) {
    if (!game_assembly_address)
        game_assembly_address = reinterpret_cast<__int64>(GetModuleHandleA("GameAssembly.dll"));

    return game_assembly_address + rva;
}

void interception_init() {
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    std::unordered_map<long long, void*> intercept_cache;
    auto current = last_intercept;
    while (current)
    {
        //debug("Binding: " + current->name + " (+" + std::to_string(current->offset) + ")");
        *current->original_pointer = reinterpret_cast<PVOID*>(resolve_rva(current->offset));
        if (current->intercept_pointer)
        {
            auto it = intercept_cache.find(current->offset);
            if (it != intercept_cache.end())
            {
                trace(MessageType::Debug, 3, "initialize", format("Changing intercept address (%d, %d)", *current->original_pointer, it->second));
                *current->original_pointer = it->second;
            }

            trace(MessageType::Debug, 3, "initialize",
                format("Intercepting: %s (%d, %d) @ %d -> %d",
                current->name.c_str(),
                game_assembly_address,
                current->offset,
                reinterpret_cast<__int64>(*current->original_pointer),
                reinterpret_cast<__int64>(current->intercept_pointer))
            );

            PDETOUR_TRAMPOLINE trampoline = nullptr;
            void* target = nullptr;
            void* detour = nullptr;
            const auto result = DetourAttachEx(
                current->original_pointer,
                current->intercept_pointer,
                &trampoline,
                &target,
                &detour
            );
            if (result)
                trace(MessageType::Error, 3, "initialize", format("Error attaching %s : %d", current->name.c_str(), result));
            else
            {
                trace(MessageType::Debug, 3, "initialize", format("Attach success (%d, %d, %d)", trampoline, target, detour));
                intercept_cache[current->offset] = detour;
            }
        }

        current = current->prev;
    }

    const auto result = DetourTransactionCommit();
    if (result)
        trace(MessageType::Error, 3, "initialize", format("Error during inject commit: %d", result));
    else
        trace(MessageType::Debug, 3, "initialize", "Injection completed");
}

void interception_detach() {
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    auto current = last_intercept;
    while (current)
    {
        if (current->intercept_pointer)
            DetourDetach(current->original_pointer, current->intercept_pointer);

        current = current->prev;
    }

    const auto result = DetourTransactionCommit();
    if (result)
        trace(MessageType::Error, 3, "uninitialize", format("Error during detach commit: %d", result));
    else
        trace(MessageType::Debug, 3, "uninitialize", "Detach completed");
}

intercept::intercept(__int64 o, PVOID* oP, PVOID iP, std::string s)
    : name(std::move(s))
    , offset(o)
    , original_pointer(oP)
    , intercept_pointer(iP)
    , next(nullptr)
{
    prev = last_intercept;
    if (prev != nullptr)
        prev->next = prev;

    last_intercept = this;
    if (first_intercept == nullptr)
        first_intercept = this;
}
