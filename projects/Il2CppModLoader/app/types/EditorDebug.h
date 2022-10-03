#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EditorDebug {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EditorDebug__Class** type_info;
        inline app::EditorDebug__Class* get_class() {
            return il2cpp::get_class<app::EditorDebug__Class>(type_info, "", "EditorDebug");
        }
        inline app::EditorDebug* create() {
            return il2cpp::create_object<app::EditorDebug>(get_class());
        }
    } // namespace EditorDebug
} // namespace app::classes::types
