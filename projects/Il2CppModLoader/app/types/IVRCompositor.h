#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor__Class** type_info;
        inline app::IVRCompositor__Class* get_class() {
            return il2cpp::get_class<app::IVRCompositor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor");
        }
        inline app::IVRCompositor* create() {
            return il2cpp::create_object<app::IVRCompositor>(get_class());
        }
        inline app::IVRCompositor__Boxed* box(app::IVRCompositor value) {
            return il2cpp::box_value<app::IVRCompositor__Boxed>(get_class(), value);
        }
    } // namespace IVRCompositor
} // namespace app::classes::types
