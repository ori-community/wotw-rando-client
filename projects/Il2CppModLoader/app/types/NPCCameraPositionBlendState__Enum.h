#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NPCCameraPositionBlendState__Enum {
        namespace {
            app::NPCCameraPositionBlendState__Enum__Class* type_info_ref = nullptr;
        }
        app::NPCCameraPositionBlendState__Enum__Class** type_info = &type_info_ref;
        inline app::NPCCameraPositionBlendState__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraPositionBlendState__Enum__Class>(type_info, "Moon", "NPCCameraPositionBlendState");
        }
        inline app::NPCCameraPositionBlendState__Enum* create() {
            return il2cpp::create_object<app::NPCCameraPositionBlendState__Enum>(get_class());
        }
    } // namespace NPCCameraPositionBlendState__Enum
} // namespace app::classes::types
