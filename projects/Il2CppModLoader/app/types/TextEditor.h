#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextEditor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextEditor__Class** type_info;
        inline app::TextEditor__Class* get_class() {
            return il2cpp::get_class<app::TextEditor__Class>(type_info, "UnityEngine", "TextEditor");
        }
        inline app::TextEditor* create() {
            return il2cpp::create_object<app::TextEditor>(get_class());
        }
    } // namespace TextEditor
} // namespace app::classes::types
