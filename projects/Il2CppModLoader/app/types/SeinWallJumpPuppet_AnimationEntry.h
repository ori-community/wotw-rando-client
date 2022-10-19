#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinWallJumpPuppet_AnimationEntry {
        namespace {
            inline app::SeinWallJumpPuppet_AnimationEntry__Class* type_info_ref = nullptr;
        }
        inline app::SeinWallJumpPuppet_AnimationEntry__Class** type_info = &type_info_ref;
        inline app::SeinWallJumpPuppet_AnimationEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinWallJumpPuppet_AnimationEntry__Class>(type_info, "", "SeinWallJumpPuppet", "AnimationEntry");
        }
        inline app::SeinWallJumpPuppet_AnimationEntry* create() {
            return il2cpp::create_object<app::SeinWallJumpPuppet_AnimationEntry>(get_class());
        }
    } // namespace SeinWallJumpPuppet_AnimationEntry
} // namespace app::classes::types
