#include "Modloader/windows_api/detours.h"
#include "Modloader/modloader.h"
#include "Modloader/windows_api/windows.h"
#include <detours/detours.h>
#include <format>

namespace modloader::win::detours {
    void start_transaction() {
        DetourRestoreAfterWith();
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
    }

    void* do_intercept(const std::string& debug_str, void** original_pointer, void* intercept_pointer) {
        debug("initialize", std::format("Intercepting (il2cpp): {} @ {} -> {}", debug_str, reinterpret_cast<uint64_t>(*original_pointer), reinterpret_cast<uint64_t>(intercept_pointer)));
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

        if (result) {
            debug("initialize", std::format("Error attaching {} : {}", debug_str, result));
            return nullptr;
        } else {
            debug("initialize", std::format("Attach success ({}, {}, {})", (void*)trampoline, target, detour));
            return detour;
        }
    }

    void detach(void** original_pointer, void* intercept_pointer) {
        DetourDetach(original_pointer, intercept_pointer);
    }

    void commit(std::string_view what) {
        const auto result = DetourTransactionCommit();
        if (result)
            error("initialize", std::format("Error while committing '{}': {}", what, result));
        else
            debug("initialize", std::format("Completed commit: '{}'", what));
    }
} // namespace modloader::win::detours
