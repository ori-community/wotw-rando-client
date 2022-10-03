#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRCompositorError__Enum {
        namespace {
            app::EVRCompositorError__Enum__Class* type_info_ref = nullptr;
        }
        app::EVRCompositorError__Enum__Class** type_info = &type_info_ref;
        inline app::EVRCompositorError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRCompositorError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRCompositorError");
        }
        inline app::EVRCompositorError__Enum* create() {
            return il2cpp::create_object<app::EVRCompositorError__Enum>(get_class());
        }
    } // namespace EVRCompositorError__Enum
} // namespace app::classes::types
