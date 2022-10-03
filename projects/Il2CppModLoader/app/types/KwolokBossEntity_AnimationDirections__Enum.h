#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_AnimationDirections__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossEntity_AnimationDirections__Enum__Class** type_info;
        inline app::KwolokBossEntity_AnimationDirections__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_AnimationDirections__Enum__Class>(type_info, "", "KwolokBossEntity", "AnimationDirections");
        }
        inline app::KwolokBossEntity_AnimationDirections__Enum* create() {
            return il2cpp::create_object<app::KwolokBossEntity_AnimationDirections__Enum>(get_class());
        }
    } // namespace KwolokBossEntity_AnimationDirections__Enum
} // namespace app::classes::types
