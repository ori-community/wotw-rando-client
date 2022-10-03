#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRState__Enum {
        namespace {
            app::EVRState__Enum__Class* type_info_ref = nullptr;
        }
        app::EVRState__Enum__Class** type_info = &type_info_ref;
        inline app::EVRState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRState__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRState");
        }
        inline app::EVRState__Enum* create() {
            return il2cpp::create_object<app::EVRState__Enum>(get_class());
        }
    } // namespace EVRState__Enum
} // namespace app::classes::types
