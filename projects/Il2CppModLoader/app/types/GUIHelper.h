#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIHelper__Class** type_info;
        inline app::GUIHelper__Class* get_class() {
            return il2cpp::get_class<app::GUIHelper__Class>(type_info, "", "GUIHelper");
        }
        inline app::GUIHelper* create() {
            return il2cpp::create_object<app::GUIHelper>(get_class());
        }
    } // namespace GUIHelper
} // namespace app::classes::types
