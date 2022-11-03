#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSettings {
        inline app::IVRSettings__Class** type_info = (app::IVRSettings__Class**)(modloader::win::memory::resolve_rva(0x04744670));
        inline app::IVRSettings__Class* get_class() {
            return il2cpp::get_class<app::IVRSettings__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings");
        }
        inline app::IVRSettings* create() {
            return il2cpp::create_object<app::IVRSettings>(get_class());
        }
        inline app::IVRSettings__Boxed* box(app::IVRSettings value) {
            return il2cpp::box_value<app::IVRSettings__Boxed>(get_class(), value);
        }
    } // namespace IVRSettings
} // namespace app::classes::types
