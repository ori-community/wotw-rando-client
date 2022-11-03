#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_PerformFirmwareUpdate {
        inline app::IVRSystem_PerformFirmwareUpdate__Class** type_info = (app::IVRSystem_PerformFirmwareUpdate__Class**)(modloader::win::memory::resolve_rva(0x047789C8));
        inline app::IVRSystem_PerformFirmwareUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_PerformFirmwareUpdate__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_PerformFirmwareUpdate");
        }
        inline app::IVRSystem_PerformFirmwareUpdate* create() {
            return il2cpp::create_object<app::IVRSystem_PerformFirmwareUpdate>(get_class());
        }
    } // namespace IVRSystem_PerformFirmwareUpdate
} // namespace app::classes::types
