#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity_Markers__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FixedDurationSceneEntity_Markers__Enum__Class** type_info;
        inline app::FixedDurationSceneEntity_Markers__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedDurationSceneEntity_Markers__Enum__Class>(type_info, "Moon.Timeline", "FixedDurationSceneEntity", "Markers");
        }
        inline app::FixedDurationSceneEntity_Markers__Enum* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity_Markers__Enum>(get_class());
        }
    } // namespace FixedDurationSceneEntity_Markers__Enum
} // namespace app::classes::types
