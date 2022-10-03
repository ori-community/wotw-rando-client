#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellMessageIcon {
        namespace {
            app::SpellMessageIcon__Class* type_info_ref = nullptr;
        }
        app::SpellMessageIcon__Class** type_info = &type_info_ref;
        inline app::SpellMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::SpellMessageIcon__Class>(type_info, "", "SpellMessageIcon");
        }
        inline app::SpellMessageIcon* create() {
            return il2cpp::create_object<app::SpellMessageIcon>(get_class());
        }
    } // namespace SpellMessageIcon
} // namespace app::classes::types
