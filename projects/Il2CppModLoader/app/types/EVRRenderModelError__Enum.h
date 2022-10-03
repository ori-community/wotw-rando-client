#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRRenderModelError__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRRenderModelError__Enum__Class** type_info;
        inline app::EVRRenderModelError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRRenderModelError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRRenderModelError");
        }
        inline app::EVRRenderModelError__Enum* create() {
            return il2cpp::create_object<app::EVRRenderModelError__Enum>(get_class());
        }
    } // namespace EVRRenderModelError__Enum
} // namespace app::classes::types
