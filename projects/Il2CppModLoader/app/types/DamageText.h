#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageText {
        namespace {
            app::DamageText__Class* type_info_ref = nullptr;
        }
        app::DamageText__Class** type_info = &type_info_ref;
        inline app::DamageText__Class* get_class() {
            return il2cpp::get_class<app::DamageText__Class>(type_info, "", "DamageText");
        }
        inline app::DamageText* create() {
            return il2cpp::create_object<app::DamageText>(get_class());
        }
    } // namespace DamageText
} // namespace app::classes::types
