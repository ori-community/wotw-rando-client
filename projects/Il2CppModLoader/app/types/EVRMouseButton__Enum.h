#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRMouseButton__Enum {
        namespace {
            app::EVRMouseButton__Enum__Class* type_info_ref = nullptr;
        }
        app::EVRMouseButton__Enum__Class** type_info = &type_info_ref;
        inline app::EVRMouseButton__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRMouseButton__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRMouseButton");
        }
        inline app::EVRMouseButton__Enum* create() {
            return il2cpp::create_object<app::EVRMouseButton__Enum>(get_class());
        }
    } // namespace EVRMouseButton__Enum
} // namespace app::classes::types
