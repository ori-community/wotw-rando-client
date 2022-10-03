#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyPostprocessAnimationPlayer {
        namespace {
            app::LegacyPostprocessAnimationPlayer__Class* type_info_ref = nullptr;
        }
        app::LegacyPostprocessAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::LegacyPostprocessAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::LegacyPostprocessAnimationPlayer__Class>(type_info, "", "LegacyPostprocessAnimationPlayer");
        }
        inline app::LegacyPostprocessAnimationPlayer* create() {
            return il2cpp::create_object<app::LegacyPostprocessAnimationPlayer>(get_class());
        }
    } // namespace LegacyPostprocessAnimationPlayer
} // namespace app::classes::types
