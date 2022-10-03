#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SelectionUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SelectionUtility__Class** type_info;
        inline app::SelectionUtility__Class* get_class() {
            return il2cpp::get_class<app::SelectionUtility__Class>(type_info, "", "SelectionUtility");
        }
        inline app::SelectionUtility* create() {
            return il2cpp::create_object<app::SelectionUtility>(get_class());
        }
    } // namespace SelectionUtility
} // namespace app::classes::types
