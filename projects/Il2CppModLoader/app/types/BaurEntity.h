#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaurEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaurEntity__Class** type_info;
        inline app::BaurEntity__Class* get_class() {
            return il2cpp::get_class<app::BaurEntity__Class>(type_info, "", "BaurEntity");
        }
        inline app::BaurEntity* create() {
            return il2cpp::create_object<app::BaurEntity>(get_class());
        }
    } // namespace BaurEntity
} // namespace app::classes::types
