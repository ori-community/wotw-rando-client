#pragma once
#include <Modloader/app/structs/KwolokBossEntity_AnimationDirections__Enum.h>
#include <Modloader/app/structs/KwolokBossEntity_AnimationDirections__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_AnimationDirections__Enum {
        inline app::KwolokBossEntity_AnimationDirections__Enum__Class** type_info() {
            static app::KwolokBossEntity_AnimationDirections__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossEntity_AnimationDirections__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478D588));
            }
            return cache;
        }
        inline app::KwolokBossEntity_AnimationDirections__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_AnimationDirections__Enum__Class>(type_info(), "", "KwolokBossEntity", "AnimationDirections");
        }
        inline app::KwolokBossEntity_AnimationDirections__Enum* create() {
            return il2cpp::create_object<app::KwolokBossEntity_AnimationDirections__Enum>(get_class());
        }
    } // namespace KwolokBossEntity_AnimationDirections__Enum
} // namespace app::classes::types
