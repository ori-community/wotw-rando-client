#include <interception.h>

#include <common.h>
#include <il2cpp_helpers.h>
#include <detours/detours.h>
#include <console.h>
#include <Common/ext.h>

#include <fstream>
#include <json/json.hpp>

#include <unordered_map>

namespace modloader
{
    extern std::string base_path;
    extern std::string modloader_path;

    namespace intercept
    {
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
                console::console_send(format("game_assembly_address: %#018x", game_assembly_address));
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
                console::console_send(format("game_assembly_address: %#018x", game_assembly_address));
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

        void* get_method_pointer(Il2CppClass* klass, il2cpp_intercept const& i)
        {
            for (auto j = 0; j < i.virtual_count; ++j)
                klass = klass->parent;

            auto overloads = il2cpp::get_method_overload_count(klass, i.method_name, i.param_count);
            if (overloads < 1)
                return nullptr;

            if (overloads == 1)
                return il2cpp::get_method_from_name_overloaded(klass, i.method_name, i.param_count, 0)->methodPointer;

            if (i.overload_params.empty())
            {
                trace(MessageType::Error, 3, "initialize", "needs overload resolving but no overload provided.");
                return nullptr;
            }

            auto overload_params = i.overload_params.substr(1, i.overload_params.size() - 2);
            trim(overload_params);

            std::vector<il2cpp::KlassDescriptor> klass_params;
            std::vector<std::string> tokens;
            split_str(overload_params, tokens, ',');
            for (auto const& token : tokens)
            {
                std::string klass = token;
                std::string namezpace = "";
                auto i = token.find(':');
                if (i != std::string::npos)
                {
                    namezpace = token.substr(0, i);
                    trim(namezpace);
                    klass = token.substr(i + 1);
                    trim(klass);
                }
                else
                    trim(klass);

                i = klass.find('.');
                if (i != std::string::npos)
                {
                    std::string nested = klass.substr(i + 1);
                    trim(nested);
                    klass = klass.substr(0, i);
                    trim(klass);
                    klass_params.push_back(il2cpp::KlassDescriptor{
                        namezpace,
                        klass + "." + nested,
                        il2cpp::get_nested_class(namezpace, klass, nested)
                    });
                }
                else
                    klass_params.push_back(il2cpp::KlassDescriptor{
                        namezpace,
                        klass,
                        il2cpp::get_class(namezpace, klass)
                    });
            }

            auto method_info = il2cpp::get_method_from_name(klass, i.method_name, klass_params);
            if (method_info == nullptr)
                trace(MessageType::Error, 3, "initialize", format("overload '%s(%s)' failed to find.", i.method_name.data(), overload_params.c_str()));

            return method_info == nullptr ? nullptr : method_info->methodPointer;
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

                auto method = get_method_pointer(klass, *current);
                if (method == nullptr)
                {
                    trace(MessageType::Error, 3, "initialize", format("Error during il2cpp inject commit: failed to find method '%s' in klass '%s' in namezpace '%s'",
                        current->method_name.data(), current->klass.data(), current->namezpace.data()));
                    current = current->prev;
                    continue;
                }

                *current->original_pointer = method;
                if (current->intercept_pointer)
                {
                    auto cache_index = reinterpret_cast<long long>(method);
                    do_intercept(
                        intercept_cache,
                        cache_index,
                        format("%s.%s.%s", current->namezpace.data(), current->klass.data(), current->method_name.data()),
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
            std::unordered_map<std::string, uint64_t> binding_overrides;
            std::ifstream stream(base_path + modloader_path);
            if (stream.is_open())
            {
                nlohmann::json j;
                try
                {
                    stream >> j;
                }
                catch (nlohmann::json::parse_error& ex)
                {
                    trace(MessageType::Debug, 3, "initialize", format("failed to parse '%s%s' error '%d' at byte '%d'", base_path.c_str(), modloader_path.c_str(), ex.id, ex.byte));
                }

                if (j.contains("il2cpp_bindings") && j["il2cpp_bindings"].is_array())
                {
                    auto bindings = j["il2cpp_bindings"];
                    for (auto it = bindings.begin(); it != bindings.end(); ++it)
                    {
                        auto& entry = *it;
                        if (entry.contains("name") && entry.contains("address") && entry["name"].is_string() && entry["address"].is_string())
                        {
                            auto x = std::stoul(entry["address"].get<std::string>(), nullptr, 16);
                            binding_overrides[entry["name"].get<std::string>()] = x;
                        }
                    }
                }
            }

            DetourRestoreAfterWith();
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());

            std::unordered_map<long long, void*> intercept_cache;
            auto current = last_intercept;
            while (current != nullptr)
            {
                auto it = binding_overrides.find(std::string(current->name));
                if (it != binding_overrides.end())
                {
                    trace(MessageType::Debug, 5, "initialize", format("internal injection, default offset overridden '%s': %d -> %d", current->name.data(), current->offset, it->second));
                    current->offset = it->second;
                }
                else
                    trace(MessageType::Debug, 5, "initialize", format("internal injection, default offset used '%s': %d", current->name.data(), current->offset));

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
            std::string_view p_method_name, std::string p_params, std::string_view p_overload_params, void** p_original_pointer, void* p_intercept_pointer, int virtual_count)
            : ztatic(p_ztatic)
            , namezpace(std::move(p_namezpace))
            , klass(std::move(p_klass))
            , nested(p_nested)
            , overload_params(p_overload_params)
            , method_name(std::move(p_method_name))
            , param_count(0)
            , original_pointer(p_original_pointer)
            , intercept_pointer(p_intercept_pointer)
            , virtual_count(virtual_count)
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
            else if (!ztatic)
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
    }
}
