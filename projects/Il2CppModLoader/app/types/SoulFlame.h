#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoulFlame {
        namespace {
            app::SoulFlame__Class* type_info_ref = nullptr;
        }
        app::SoulFlame__Class** type_info = &type_info_ref;
        inline app::SoulFlame__Class* get_class() {
            return il2cpp::get_class<app::SoulFlame__Class>(type_info, "", "SoulFlame");
        }
        inline app::SoulFlame* create() {
            return il2cpp::create_object<app::SoulFlame>(get_class());
        }
    } // namespace SoulFlame
} // namespace app::classes::types
