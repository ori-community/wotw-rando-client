#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DRSCaptureAgent {
        inline app::DRSCaptureAgent__Class** type_info = (app::DRSCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04762530));
        inline app::DRSCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::DRSCaptureAgent__Class>(type_info, "", "DRSCaptureAgent");
        }
        inline app::DRSCaptureAgent* create() {
            return il2cpp::create_object<app::DRSCaptureAgent>(get_class());
        }
    } // namespace DRSCaptureAgent
} // namespace app::classes::types
