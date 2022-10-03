#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroupBase_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CleverMenuItemGroupBase_c__Class** type_info;
        inline app::CleverMenuItemGroupBase_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemGroupBase_c__Class>(type_info, "", "CleverMenuItemGroupBase", "<>c");
        }
        inline app::CleverMenuItemGroupBase_c* create() {
            return il2cpp::create_object<app::CleverMenuItemGroupBase_c>(get_class());
        }
    } // namespace CleverMenuItemGroupBase_c
} // namespace app::classes::types
