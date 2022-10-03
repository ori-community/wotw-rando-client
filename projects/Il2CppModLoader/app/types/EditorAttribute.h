#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EditorAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EditorAttribute__Class** type_info;
        inline app::EditorAttribute__Class* get_class() {
            return il2cpp::get_class<app::EditorAttribute__Class>(type_info, "System.ComponentModel", "EditorAttribute");
        }
        inline app::EditorAttribute* create() {
            return il2cpp::create_object<app::EditorAttribute>(get_class());
        }
    } // namespace EditorAttribute
} // namespace app::classes::types
