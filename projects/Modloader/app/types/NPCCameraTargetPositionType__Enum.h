#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NPCCameraTargetPositionType__Enum {
        namespace {
            inline app::NPCCameraTargetPositionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NPCCameraTargetPositionType__Enum__Class** type_info = &type_info_ref;
        inline app::NPCCameraTargetPositionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraTargetPositionType__Enum__Class>(type_info, "Moon", "NPCCameraTargetPositionType");
        }
        inline app::NPCCameraTargetPositionType__Enum* create() {
            return il2cpp::create_object<app::NPCCameraTargetPositionType__Enum>(get_class());
        }
    } // namespace NPCCameraTargetPositionType__Enum
} // namespace app::classes::types
