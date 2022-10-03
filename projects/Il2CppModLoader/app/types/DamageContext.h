#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageContext__Class** type_info;
        inline app::DamageContext__Class* get_class() {
            return il2cpp::get_class<app::DamageContext__Class>(type_info, "", "DamageContext");
        }
        inline app::DamageContext* create() {
            return il2cpp::create_object<app::DamageContext>(get_class());
        }
        inline app::DamageContext__Boxed* box(app::DamageContext value) {
            return il2cpp::box_value<app::DamageContext__Boxed>(get_class(), value);
        }
    } // namespace DamageContext
} // namespace app::classes::types
