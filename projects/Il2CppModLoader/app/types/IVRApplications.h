#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications__Class** type_info;
        inline app::IVRApplications__Class* get_class() {
            return il2cpp::get_class<app::IVRApplications__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications");
        }
        inline app::IVRApplications* create() {
            return il2cpp::create_object<app::IVRApplications>(get_class());
        }
        inline app::IVRApplications__Boxed* box(app::IVRApplications value) {
            return il2cpp::box_value<app::IVRApplications__Boxed>(get_class(), value);
        }
    } // namespace IVRApplications
} // namespace app::classes::types
