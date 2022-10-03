#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageResult__Class** type_info;
        inline app::DamageResult__Class* get_class() {
            return il2cpp::get_class<app::DamageResult__Class>(type_info, "", "DamageResult");
        }
        inline app::DamageResult* create() {
            return il2cpp::create_object<app::DamageResult>(get_class());
        }
        inline app::DamageResult__Boxed* box(app::DamageResult value) {
            return il2cpp::box_value<app::DamageResult__Boxed>(get_class(), value);
        }
    } // namespace DamageResult
} // namespace app::classes::types
