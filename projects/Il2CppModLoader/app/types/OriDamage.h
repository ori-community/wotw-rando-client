#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriDamage {
        namespace {
            app::OriDamage__Class* type_info_ref = nullptr;
        }
        app::OriDamage__Class** type_info = &type_info_ref;
        inline app::OriDamage__Class* get_class() {
            return il2cpp::get_class<app::OriDamage__Class>(type_info, "", "OriDamage");
        }
        inline app::OriDamage* create() {
            return il2cpp::create_object<app::OriDamage>(get_class());
        }
    } // namespace OriDamage
} // namespace app::classes::types
