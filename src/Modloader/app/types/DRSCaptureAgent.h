#pragma once
#include <Modloader/app/structs/DRSCaptureAgent.h>
#include <Modloader/app/structs/DRSCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DRSCaptureAgent {
        inline app::DRSCaptureAgent__Class** type_info() {
            static app::DRSCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DRSCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04762530));
            }
            return cache;
        }
        inline app::DRSCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::DRSCaptureAgent__Class>(type_info(), "", "DRSCaptureAgent");
        }
        inline app::DRSCaptureAgent* create() {
            return il2cpp::create_object<app::DRSCaptureAgent>(get_class());
        }
    } // namespace DRSCaptureAgent
} // namespace app::classes::types
