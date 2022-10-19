#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimationPlayer {
        namespace {
            inline app::MoonAnimationPlayer__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::MoonAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimationPlayer__Class>(type_info, "Moon", "MoonAnimationPlayer");
        }
        inline app::MoonAnimationPlayer* create() {
            return il2cpp::create_object<app::MoonAnimationPlayer>(get_class());
        }
    } // namespace MoonAnimationPlayer
} // namespace app::classes::types
