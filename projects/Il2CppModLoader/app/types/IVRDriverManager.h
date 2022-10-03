#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRDriverManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRDriverManager__Class** type_info;
        inline app::IVRDriverManager__Class* get_class() {
            return il2cpp::get_class<app::IVRDriverManager__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRDriverManager");
        }
        inline app::IVRDriverManager* create() {
            return il2cpp::create_object<app::IVRDriverManager>(get_class());
        }
        inline app::IVRDriverManager__Boxed* box(app::IVRDriverManager value) {
            return il2cpp::box_value<app::IVRDriverManager__Boxed>(get_class(), value);
        }
    } // namespace IVRDriverManager
} // namespace app::classes::types
