#pragma once
#include <Modloader/app/structs/SeinWallJumpPuppet_AnimationEntry.h>
#include <Modloader/app/structs/SeinWallJumpPuppet_AnimationEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWallJumpPuppet_AnimationEntry {
        inline app::SeinWallJumpPuppet_AnimationEntry__Class** type_info() {
            static app::SeinWallJumpPuppet_AnimationEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinWallJumpPuppet_AnimationEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinWallJumpPuppet_AnimationEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinWallJumpPuppet_AnimationEntry__Class>(type_info(), "", "SeinWallJumpPuppet", "AnimationEntry");
        }
        inline app::SeinWallJumpPuppet_AnimationEntry* create() {
            return il2cpp::create_object<app::SeinWallJumpPuppet_AnimationEntry>(get_class());
        }
    } // namespace SeinWallJumpPuppet_AnimationEntry
} // namespace app::classes::types
