#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HurtPlayer {
        namespace {
            inline app::HurtPlayer__Class* type_info_ref = nullptr;
        }
        inline app::HurtPlayer__Class** type_info = &type_info_ref;
        inline app::HurtPlayer__Class* get_class() {
            return il2cpp::get_class<app::HurtPlayer__Class>(type_info, "", "HurtPlayer");
        }
        inline app::HurtPlayer* create() {
            return il2cpp::create_object<app::HurtPlayer>(get_class());
        }
    } // namespace HurtPlayer
} // namespace app::classes::types
