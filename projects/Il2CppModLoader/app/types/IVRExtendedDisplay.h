#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRExtendedDisplay__Class** type_info;
        inline app::IVRExtendedDisplay__Class* get_class() {
            return il2cpp::get_class<app::IVRExtendedDisplay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay");
        }
        inline app::IVRExtendedDisplay* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay>(get_class());
        }
        inline app::IVRExtendedDisplay__Boxed* box(app::IVRExtendedDisplay value) {
            return il2cpp::box_value<app::IVRExtendedDisplay__Boxed>(get_class(), value);
        }
    } // namespace IVRExtendedDisplay
} // namespace app::classes::types
