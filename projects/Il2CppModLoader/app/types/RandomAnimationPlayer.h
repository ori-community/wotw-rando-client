#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RandomAnimationPlayer {
        namespace {
            inline app::RandomAnimationPlayer__Class* type_info_ref = nullptr;
        }
        inline app::RandomAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::RandomAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::RandomAnimationPlayer__Class>(type_info, "", "RandomAnimationPlayer");
        }
        inline app::RandomAnimationPlayer* create() {
            return il2cpp::create_object<app::RandomAnimationPlayer>(get_class());
        }
    } // namespace RandomAnimationPlayer
} // namespace app::classes::types
