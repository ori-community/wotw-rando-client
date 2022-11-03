#include "Common/ext.h"
#include "Modloader/common.h"
#include "Modloader/windows_api/detours.h"
#include "Modloader/windows_api/windows.h"
#include <detours/detours.h>


namespace modloader::win::detours {
    void start_transaction() {
        DetourRestoreAfterWith();
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
    }

    void* do_intercept(const std::string& debug, void** original_pointer, void* intercept_pointer) {
        trace(MessageType::Debug, 3, "initialize", format("Intercepting (il2cpp): %s @ %d -> %d", debug.c_str(),
            reinterpret_cast<uint64_t>(*original_pointer), reinterpret_cast<uint64_t>(intercept_pointer)));
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
            trace(MessageType::Error, 3, "initialize", format("Error attaching %s : %d", debug.c_str(), result));
            return nullptr;
        } else {
            trace(MessageType::Debug, 3, "initialize", format("Attach success (%d, %d, %d)", trampoline, target, detour));
            return detour;
        }
    }

    void detach(void** original_pointer, void* intercept_pointer) {
        DetourDetach(original_pointer, intercept_pointer);
    }

    void commit(std::string_view what) {
        const auto result = DetourTransactionCommit();
        if (result)
            trace(MessageType::Error, 3, "initialize", format("Error while committing '%s': %d", what, result));
        else
            trace(MessageType::Debug, 3, "initialize", format("Completed commit: '%s'", what));
    }
}