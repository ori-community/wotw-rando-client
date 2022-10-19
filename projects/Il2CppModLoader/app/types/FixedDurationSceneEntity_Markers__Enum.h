#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity_Markers__Enum {
        inline app::FixedDurationSceneEntity_Markers__Enum__Class** type_info = (app::FixedDurationSceneEntity_Markers__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C8C0));
        inline app::FixedDurationSceneEntity_Markers__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedDurationSceneEntity_Markers__Enum__Class>(type_info, "Moon.Timeline", "FixedDurationSceneEntity", "Markers");
        }
        inline app::FixedDurationSceneEntity_Markers__Enum* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity_Markers__Enum>(get_class());
        }
    } // namespace FixedDurationSceneEntity_Markers__Enum
} // namespace app::classes::types
