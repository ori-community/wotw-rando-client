#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextMeshRenderer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextMeshRenderer__Class** type_info;
        inline app::TextMeshRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextMeshRenderer__Class>(type_info, "CatlikeCoding.TextBox", "TextMeshRenderer");
        }
        inline app::TextMeshRenderer* create() {
            return il2cpp::create_object<app::TextMeshRenderer>(get_class());
        }
    } // namespace TextMeshRenderer
} // namespace app::classes::types
