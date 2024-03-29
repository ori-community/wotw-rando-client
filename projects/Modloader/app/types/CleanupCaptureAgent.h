#pragma once
#include <Modloader/app/structs/CleanupCaptureAgent.h>
#include <Modloader/app/structs/CleanupCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleanupCaptureAgent {
        inline app::CleanupCaptureAgent__Class** type_info() {
            static app::CleanupCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CleanupCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04714458));
            }
            return cache;
        }
        inline app::CleanupCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::CleanupCaptureAgent__Class>(type_info(), "", "CleanupCaptureAgent");
        }
        inline app::CleanupCaptureAgent* create() {
            return il2cpp::create_object<app::CleanupCaptureAgent>(get_class());
        }
    } // namespace CleanupCaptureAgent
} // namespace app::classes::types
