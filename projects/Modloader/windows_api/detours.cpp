#include "Modloader/windows_api/detours.h"
#include "Modloader/modloader.h"
#include "Modloader/windows_api/windows.h"
#include <detours/detours.h>
#include <fmt/core.h>

namespace modloader::win::detours {
    void start_transaction() {
        DetourRestoreAfterWith();
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
    }

    void* do_intercept(const std::string& debug, void** original_pointer, void* intercept_pointer) {
        trace(MessageType::Debug, 3, "initialize", fmt::format("Intercepting (il2cpp): {} @ {} -> {}", debug, reinterpret_cast<uint64_t>(*original_pointer), reinterpret_cast<uint64_t>(intercept_pointer)));
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
            trace(MessageType::Error, 3, "initialize", fmt::format("Error attaching {} : {}", debug, result));
            return nullptr;
        } else {
            trace(MessageType::Debug, 3, "initialize", fmt::format("Attach success ({}, {}, {})", (void*)trampoline, target, detour));
            return detour;
        }
    }

    void detach(void** original_pointer, void* intercept_pointer) {
        DetourDetach(original_pointer, intercept_pointer);
    }

    void commit(std::string_view what) {
        const auto result = DetourTransactionCommit();
        if (result)
            trace(MessageType::Error, 3, "initialize", fmt::format("Error while committing '{}': {}", what, result));
        else
            trace(MessageType::Debug, 3, "initialize", fmt::format("Completed commit: '{}'", what));
    }
} // namespace modloader::win::detours