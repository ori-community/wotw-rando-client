#include <interception.h>
#include <common.h>
#include <detours/detours.h>
#include <dev/dev_commands.h>
#include <Common/ext.h>

#include <unordered_map>

intercept* first_intercept = nullptr;
intercept* last_intercept = nullptr;
uint64_t game_assembly_address;

uint64_t resolve_rva(uint64_t rva)
{
    if (!game_assembly_address)
    {
        auto handle = GetModuleHandleA("GameAssembly.dll");
        if (handle == nullptr)
        {
            trace(MessageType::Error, 1, "initialize", "Failed to get handle of GameAssembly.dll");
            return 0;
        }

        game_assembly_address = reinterpret_cast<uint64_t>(handle);
        dev::console_send(format("game_assembly_address: %#018x", game_assembly_address));
    }

    return game_assembly_address + rva;
}

uint64_t unresolve_rva(uint64_t ptr)
{
    if (!game_assembly_address)
    {
        auto handle = GetModuleHandleA("GameAssembly.dll");
        if (handle == nullptr)
        {
            trace(MessageType::Error, 1, "initialize", "Failed to get handle of GameAssembly.dll");
            return 0;
        }

        game_assembly_address = reinterpret_cast<uint64_t>(handle);
        dev::console_send(format("game_assembly_address: %#018x", game_assembly_address));
    }

    return ptr - game_assembly_address;
}

void interception_init()
{
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    std::unordered_map<long long, void*> intercept_cache;
    auto current = last_intercept;
    while (current)
    {
        *current->original_pointer = reinterpret_cast<void**>(resolve_rva(current->offset));
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
                reinterpret_cast<uint64_t>(*current->original_pointer),
                reinterpret_cast<uint64_t>(current->intercept_pointer))
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

void interception_detach()
{
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

intercept::intercept(uint64_t o, PVOID* oP, PVOID iP, std::string s)
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
