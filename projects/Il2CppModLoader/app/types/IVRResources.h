#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRResources {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRResources__Class** type_info;
        inline app::IVRResources__Class* get_class() {
            return il2cpp::get_class<app::IVRResources__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRResources");
        }
        inline app::IVRResources* create() {
            return il2cpp::create_object<app::IVRResources>(get_class());
        }
        inline app::IVRResources__Boxed* box(app::IVRResources value) {
            return il2cpp::box_value<app::IVRResources__Boxed>(get_class(), value);
        }
    } // namespace IVRResources
} // namespace app::classes::types
