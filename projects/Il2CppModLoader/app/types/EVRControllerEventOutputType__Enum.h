#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRControllerEventOutputType__Enum {
        namespace {
            app::EVRControllerEventOutputType__Enum__Class* type_info_ref = nullptr;
        }
        app::EVRControllerEventOutputType__Enum__Class** type_info = &type_info_ref;
        inline app::EVRControllerEventOutputType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRControllerEventOutputType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRControllerEventOutputType");
        }
        inline app::EVRControllerEventOutputType__Enum* create() {
            return il2cpp::create_object<app::EVRControllerEventOutputType__Enum>(get_class());
        }
    } // namespace EVRControllerEventOutputType__Enum
} // namespace app::classes::types
