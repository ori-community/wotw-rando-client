#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageResultContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageResultContext__Class** type_info;
        inline app::DamageResultContext__Class* get_class() {
            return il2cpp::get_class<app::DamageResultContext__Class>(type_info, "", "DamageResultContext");
        }
        inline app::DamageResultContext* create() {
            return il2cpp::create_object<app::DamageResultContext>(get_class());
        }
        inline app::DamageResultContext__Boxed* box(app::DamageResultContext value) {
            return il2cpp::box_value<app::DamageResultContext__Boxed>(get_class(), value);
        }
    } // namespace DamageResultContext
} // namespace app::classes::types
