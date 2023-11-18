#pragma once
#include <Modloader/app/structs/NPCCameraPositionBlendState__Enum.h>
#include <Modloader/app/structs/NPCCameraPositionBlendState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCCameraPositionBlendState__Enum {
        inline app::NPCCameraPositionBlendState__Enum__Class** type_info() {
            static app::NPCCameraPositionBlendState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCCameraPositionBlendState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCCameraPositionBlendState__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraPositionBlendState__Enum__Class>(type_info(), "Moon", "NPCCameraPositionBlendState");
        }
        inline app::NPCCameraPositionBlendState__Enum* create() {
            return il2cpp::create_object<app::NPCCameraPositionBlendState__Enum>(get_class());
        }
    } // namespace NPCCameraPositionBlendState__Enum
} // namespace app::classes::types
