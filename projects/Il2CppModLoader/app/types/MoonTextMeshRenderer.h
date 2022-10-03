#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTextMeshRenderer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTextMeshRenderer__Class** type_info;
        inline app::MoonTextMeshRenderer__Class* get_class() {
            return il2cpp::get_class<app::MoonTextMeshRenderer__Class>(type_info, "CatlikeCoding.TextBox", "MoonTextMeshRenderer");
        }
        inline app::MoonTextMeshRenderer* create() {
            return il2cpp::create_object<app::MoonTextMeshRenderer>(get_class());
        }
    } // namespace MoonTextMeshRenderer
} // namespace app::classes::types
