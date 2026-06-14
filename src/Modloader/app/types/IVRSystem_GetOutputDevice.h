#pragma once
#include <Modloader/app/structs/IVRSystem_GetOutputDevice.h>
#include <Modloader/app/structs/IVRSystem_GetOutputDevice__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetOutputDevice {
        inline app::IVRSystem_GetOutputDevice__Class** type_info() {
            static app::IVRSystem_GetOutputDevice__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetOutputDevice__Class**)(modloader::win::memory::resolve_rva(0x0476EFE0));
            }
            return cache;
        }
        inline app::IVRSystem_GetOutputDevice__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetOutputDevice__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetOutputDevice");
        }
        inline app::IVRSystem_GetOutputDevice* create() {
            return il2cpp::create_object<app::IVRSystem_GetOutputDevice>(get_class());
        }
    } // namespace IVRSystem_GetOutputDevice
} // namespace app::classes::types
