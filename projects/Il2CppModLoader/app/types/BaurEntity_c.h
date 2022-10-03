#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaurEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaurEntity_c__Class** type_info;
        inline app::BaurEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BaurEntity_c__Class>(type_info, "", "BaurEntity", "<>c");
        }
        inline app::BaurEntity_c* create() {
            return il2cpp::create_object<app::BaurEntity_c>(get_class());
        }
    } // namespace BaurEntity_c
} // namespace app::classes::types
