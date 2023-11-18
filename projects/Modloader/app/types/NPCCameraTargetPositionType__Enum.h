#pragma once
#include <Modloader/app/structs/NPCCameraTargetPositionType__Enum.h>
#include <Modloader/app/structs/NPCCameraTargetPositionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCCameraTargetPositionType__Enum {
        inline app::NPCCameraTargetPositionType__Enum__Class** type_info() {
            static app::NPCCameraTargetPositionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCCameraTargetPositionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCCameraTargetPositionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraTargetPositionType__Enum__Class>(type_info(), "Moon", "NPCCameraTargetPositionType");
        }
        inline app::NPCCameraTargetPositionType__Enum* create() {
            return il2cpp::create_object<app::NPCCameraTargetPositionType__Enum>(get_class());
        }
    } // namespace NPCCameraTargetPositionType__Enum
} // namespace app::classes::types
