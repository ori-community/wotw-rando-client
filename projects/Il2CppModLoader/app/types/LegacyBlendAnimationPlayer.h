#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyBlendAnimationPlayer {
        namespace {
            inline app::LegacyBlendAnimationPlayer__Class* type_info_ref = nullptr;
        }
        inline app::LegacyBlendAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::LegacyBlendAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::LegacyBlendAnimationPlayer__Class>(type_info, "", "LegacyBlendAnimationPlayer");
        }
        inline app::LegacyBlendAnimationPlayer* create() {
            return il2cpp::create_object<app::LegacyBlendAnimationPlayer>(get_class());
        }
    } // namespace LegacyBlendAnimationPlayer
} // namespace app::classes::types
