#pragma once
#include <Modloader/app/structs/FixedDurationSceneEntity_Markers__Enum.h>
#include <Modloader/app/structs/FixedDurationSceneEntity_Markers__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity_Markers__Enum {
        inline app::FixedDurationSceneEntity_Markers__Enum__Class** type_info() {
            static app::FixedDurationSceneEntity_Markers__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FixedDurationSceneEntity_Markers__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C8C0));
            }
            return cache;
        }
        inline app::FixedDurationSceneEntity_Markers__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedDurationSceneEntity_Markers__Enum__Class>(type_info(), "Moon.Timeline", "FixedDurationSceneEntity", "Markers");
        }
        inline app::FixedDurationSceneEntity_Markers__Enum* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity_Markers__Enum>(get_class());
        }
    } // namespace FixedDurationSceneEntity_Markers__Enum
} // namespace app::classes::types
