#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EditorBrowsableAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EditorBrowsableAttribute__Class** type_info;
        inline app::EditorBrowsableAttribute__Class* get_class() {
            return il2cpp::get_class<app::EditorBrowsableAttribute__Class>(type_info, "System.ComponentModel", "EditorBrowsableAttribute");
        }
        inline app::EditorBrowsableAttribute* create() {
            return il2cpp::create_object<app::EditorBrowsableAttribute>(get_class());
        }
    } // namespace EditorBrowsableAttribute
} // namespace app::classes::types
