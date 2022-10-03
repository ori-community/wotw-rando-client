#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItem_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CleverMenuItem_c__Class** type_info;
        inline app::CleverMenuItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItem_c__Class>(type_info, "", "CleverMenuItem", "<>c");
        }
        inline app::CleverMenuItem_c* create() {
            return il2cpp::create_object<app::CleverMenuItem_c>(get_class());
        }
    } // namespace CleverMenuItem_c
} // namespace app::classes::types
