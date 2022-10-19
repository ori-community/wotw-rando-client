#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Display_DisplaysUpdatedDelegate {
        namespace {
            inline app::Display_DisplaysUpdatedDelegate__Class* type_info_ref = nullptr;
        }
        inline app::Display_DisplaysUpdatedDelegate__Class** type_info = &type_info_ref;
        inline app::Display_DisplaysUpdatedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::Display_DisplaysUpdatedDelegate__Class>(type_info, "UnityEngine", "Display", "DisplaysUpdatedDelegate");
        }
        inline app::Display_DisplaysUpdatedDelegate* create() {
            return il2cpp::create_object<app::Display_DisplaysUpdatedDelegate>(get_class());
        }
    } // namespace Display_DisplaysUpdatedDelegate
} // namespace app::classes::types
