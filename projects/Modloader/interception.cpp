#include <Modloader/modloader.h>
#include <ranges>

#include <Modloader/interception.h>
#include <Modloader/windows_api/detours.h>
#include <Modloader/windows_api/memory.h>

#include <unordered_map>

using namespace modloader::win;

namespace modloader {
    extern std::filesystem::path modloader_config_path;

    namespace interception {
        // These two are functions to guarantee initialization order.
        // Otherwise, the storage vectors might not have been initialized
        // when they are accessed.
        std::vector<Intercept*>& intercepts() {
            static std::vector<Intercept*> storage;
            return storage;
        }

        std::vector<Binding*>& bindings() {
            static std::vector<Binding*> storage;
            return storage;
        }

        void commit_bindings() {
            for (auto& binding: bindings()) {
                *binding->pointer = reinterpret_cast<void*>(memory::resolve_rva(binding->offset));
            }
        }

        void commit_intercepts() {
            std::unordered_map<void*, void*> intercept_cache;

            detours::start_transaction();

            std::ranges::sort(intercepts(), [](const Intercept* a, const Intercept* b) {
                return a->sort_order < b->sort_order;
            });

            for (const auto& intercept: intercepts()) {
                *intercept->original_pointer = *intercept->binding_pointer;

                if (intercept->intercept_pointer) {
                    auto it = intercept_cache.find(*intercept->binding_pointer);
                    if (it != intercept_cache.end()) {
                        debug("initialize", std::format("Changing intercept address ({}, {})", *intercept->original_pointer, it->second));
                        *intercept->original_pointer = it->second;
                    }

                    void* detour = detours::do_intercept(
                        std::format("{} ({}, {})", intercept->name.data(), memory::get_game_assembly_address(), reinterpret_cast<uint64_t>(*intercept->binding_pointer)),
                        intercept->original_pointer,
                        intercept->intercept_pointer
                    );

                    if (detour != nullptr) {
                        intercept_cache[*intercept->binding_pointer] = detour;
                    }
                }
            }

            detours::commit("intercepts");
        }

        void initialize() {
            commit_bindings();
            commit_intercepts();
        }

        void detach() {
            detours::start_transaction();

            for (const auto& intercept: intercepts() | std::views::reverse) {
                if (intercept->intercept_pointer) {
                    detours::detach(intercept->original_pointer, intercept->intercept_pointer);
                }
            }

            detours::commit("detach");
        }

        Binding::Binding(uint64_t address, void** ptr, std::string_view s) :
            name(s), offset(address), pointer(ptr) {
            bindings().push_back(this);
        }

        Intercept::Intercept(void** binding_ptr, void** original, void* intercepted, std::string_view name) :
            name(name), binding_pointer(binding_ptr), original_pointer(original), intercept_pointer(intercepted) {
            intercepts().push_back(this);
        }
    } // namespace interception
} // namespace modloader
