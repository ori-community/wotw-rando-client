#include <interception.h>

#include <common.h>
#include <il2cpp_helpers.h>
#include <detours/detours.h>
#include <dev/dev_commands.h>
#include <Common/ext.h>

#include <unordered_map>

// TODO: Handle bindings and intercepts separately so we can't call in the middle of a function chain.
intercept* first_intercept = nullptr;
intercept* last_intercept = nullptr;
il2cpp_intercept* first_il2cpp_intercept = nullptr;
il2cpp_intercept* last_il2cpp_intercept = nullptr;

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

void do_intercept(std::unordered_map<long long, void*>& intercept_cache, long long cache_index, std::string debug, void** original_pointer, void* intercept_pointer)
{
    auto it = intercept_cache.find(cache_index);
    if (it != intercept_cache.end())
    {
        trace(MessageType::Debug, 3, "initialize", format("Changing intercept address (%d, %d)", *original_pointer, it->second));
        *original_pointer = it->second;
    }

    trace(MessageType::Debug, 3, "initialize",
        format("Intercepting (il2cpp): %s @ %d -> %d",
            debug.c_str(),
            reinterpret_cast<uint64_t>(*original_pointer),
            reinterpret_cast<uint64_t>(intercept_pointer))
    );

    PDETOUR_TRAMPOLINE trampoline = nullptr;
    void* target = nullptr;
    void* detour = nullptr;
    const auto result = DetourAttachEx(
        original_pointer,
        intercept_pointer,
        &trampoline,
        &target,
        &detour
    );

    if (result)
        trace(MessageType::Error, 3, "initialize", format("Error attaching %s : %d", debug.c_str(), result));
    else
    {
        trace(MessageType::Debug, 3, "initialize", format("Attach success (%d, %d, %d)", trampoline, target, detour));
        intercept_cache[cache_index] = detour;
    }
}

void il2cpp_intercepts()
{
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    std::unordered_map<long long, void*> intercept_cache;
    auto current = last_il2cpp_intercept;
    while (current != nullptr)
    {
        Il2CppClass* klass;
        if (!current->nested.empty())
        {
            klass = il2cpp::get_nested_class(current->namezpace, current->klass, current->nested);
            if (klass == nullptr)
            {
                trace(MessageType::Error, 3, "initialize", format("Error during il2cpp inject commit: failed to find klass '%s.%s' in namezpace '%s'",
                    current->klass.data(), current->nested.data(), current->namezpace.data()));
                current = current->prev;
                continue;
            }
        }
        else
        {
            klass = il2cpp::get_class(current->namezpace, current->klass);
            if (klass == nullptr)
            {
                trace(MessageType::Error, 3, "initialize", format("Error during il2cpp inject commit: failed to find klass '%s' in namezpace '%s'",
                    current->klass.data(), current->namezpace.data()));
                current = current->prev;
                continue;
            }
        }

        auto method = il2cpp::untyped::get_method_from_name(klass, current->method_name, current->param_count);
        if (method == nullptr)
        {
            trace(MessageType::Error, 3, "initialize", format("Error during il2cpp inject commit: failed to find method '%s' in klass '%s' in namezpace '%s'",
                current->method_name.data(), current->klass.data(), current->namezpace.data()));
            current = current->prev;
            continue;
        }

        *current->original_pointer = reinterpret_cast<void*>(method->methodPointer);
        if (current->intercept_pointer)
        {
            auto cache_index = reinterpret_cast<long long>(method->methodPointer);
            do_intercept(
                intercept_cache,
                cache_index,
                format("%s.%s.%s", current->namezpace, current->klass, current->method_name),
                current->original_pointer,
                current->intercept_pointer
            );
        }

        current = current->prev;
    }

    const auto result = DetourTransactionCommit();
    if (result)
        trace(MessageType::Error, 3, "initialize", format("Error during il2cpp inject commit: %d", result));
    else
        trace(MessageType::Debug, 3, "initialize", "Il2Cpp injection completed");
}

void internal_intercepts()
{
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    std::unordered_map<long long, void*> intercept_cache;
    auto current = last_intercept;
    while (current != nullptr)
    {
        *current->original_pointer = reinterpret_cast<void*>(resolve_rva(current->offset));
        if (current->intercept_pointer)
        {
            do_intercept(
                intercept_cache,
                current->offset,
                format("%s (%d, %d)", current->name.data(), game_assembly_address, current->offset),
                current->original_pointer,
                current->intercept_pointer
            );
        }

        current = current->prev;
    }

    const auto result = DetourTransactionCommit();
    if (result)
        trace(MessageType::Error, 3, "initialize", format("Error during internal inject commit: %d", result));
    else
        trace(MessageType::Debug, 3, "initialize", "Internal injection completed");
}

void interception_init()
{
    internal_intercepts();
    il2cpp_intercepts();
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

il2cpp_intercept::il2cpp_intercept(bool p_ztatic, std::string_view p_namezpace, std::string_view p_klass, std::string_view p_nested,
    std::string_view p_method_name, std::string p_params, void** p_original_pointer, void* p_intercept_pointer)
    : ztatic(p_ztatic)
    , namezpace(std::move(p_namezpace))
    , klass(std::move(p_klass))
    , nested(p_nested)
    , method_name(std::move(p_method_name))
    , param_count(0)
    , original_pointer(p_original_pointer)
    , intercept_pointer(p_intercept_pointer)
    , next(nullptr)
{
    // Chop off ( )
    p_params = p_params.substr(1, p_params.size() - 2);
    trim(p_params);
    if (!p_params.empty())
    {
        std::vector<std::string> tokens;
        split_str(p_params, tokens, ',');
        param_count = tokens.size();
        if (!p_ztatic)
            --param_count;
    }
    else if (!p_ztatic)
        trace(MessageType::Error, 3, "initalize", format("%s.%s.%s should not have 0 parameters as it is not a static method.", namezpace.data(), klass.data(), method_name.data()));

    prev = last_il2cpp_intercept;
    if (prev != nullptr)
        prev->next = prev;

    last_il2cpp_intercept = this;
    if (first_il2cpp_intercept == nullptr)
        first_il2cpp_intercept = this;
}

intercept::intercept(uint64_t o, PVOID* oP, PVOID iP, std::string_view s)
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
