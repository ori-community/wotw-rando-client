#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyAnimationPlayer {
        namespace {
            inline app::LegacyAnimationPlayer__Class* type_info_ref = nullptr;
        }
        inline app::LegacyAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::LegacyAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimationPlayer__Class>(type_info, "", "LegacyAnimationPlayer");
        }
        inline app::LegacyAnimationPlayer* create() {
            return il2cpp::create_object<app::LegacyAnimationPlayer>(get_class());
        }
    } // namespace LegacyAnimationPlayer
} // namespace app::classes::types
