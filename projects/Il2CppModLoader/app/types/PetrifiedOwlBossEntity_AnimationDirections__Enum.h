#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity_AnimationDirections__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class** type_info;
        inline app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class>(type_info, "", "PetrifiedOwlBossEntity", "AnimationDirections");
        }
        inline app::PetrifiedOwlBossEntity_AnimationDirections__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity_AnimationDirections__Enum>(get_class());
        }
    } // namespace PetrifiedOwlBossEntity_AnimationDirections__Enum
} // namespace app::classes::types
