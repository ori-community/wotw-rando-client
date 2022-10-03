#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ETrackedControllerRole__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ETrackedControllerRole__Enum__Class** type_info;
        inline app::ETrackedControllerRole__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackedControllerRole__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackedControllerRole");
        }
        inline app::ETrackedControllerRole__Enum* create() {
            return il2cpp::create_object<app::ETrackedControllerRole__Enum>(get_class());
        }
    } // namespace ETrackedControllerRole__Enum
} // namespace app::classes::types
