#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRDevice {
        inline app::XRDevice__Class** type_info = (app::XRDevice__Class**)(modloader::win::memory::resolve_rva(0x04765880));
        inline app::XRDevice__Class* get_class() {
            return il2cpp::get_class<app::XRDevice__Class>(type_info, "UnityEngine.XR", "XRDevice");
        }
        inline app::XRDevice* create() {
            return il2cpp::create_object<app::XRDevice>(get_class());
        }
    } // namespace XRDevice
} // namespace app::classes::types
