#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTextMeshRenderer_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTextMeshRenderer_1__Class** type_info;
        inline app::MoonTextMeshRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::MoonTextMeshRenderer_1__Class>(type_info, "Moon.UI", "MoonTextMeshRenderer");
        }
        inline app::MoonTextMeshRenderer_1* create() {
            return il2cpp::create_object<app::MoonTextMeshRenderer_1>(get_class());
        }
    } // namespace MoonTextMeshRenderer_1
} // namespace app::classes::types
