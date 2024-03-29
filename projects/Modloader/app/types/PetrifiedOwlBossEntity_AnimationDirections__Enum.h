#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossEntity_AnimationDirections__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity_AnimationDirections__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity_AnimationDirections__Enum {
        inline app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class** type_info() {
            static app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472B0B0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class>(type_info(), "", "PetrifiedOwlBossEntity", "AnimationDirections");
        }
        inline app::PetrifiedOwlBossEntity_AnimationDirections__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity_AnimationDirections__Enum>(get_class());
        }
    } // namespace PetrifiedOwlBossEntity_AnimationDirections__Enum
} // namespace app::classes::types
