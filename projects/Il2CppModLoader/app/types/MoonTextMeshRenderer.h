#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTextMeshRenderer {
        inline app::MoonTextMeshRenderer__Class** type_info = (app::MoonTextMeshRenderer__Class**)(modloader::win::memory::resolve_rva(0x047596C0));
        inline app::MoonTextMeshRenderer__Class* get_class() {
            return il2cpp::get_class<app::MoonTextMeshRenderer__Class>(type_info, "CatlikeCoding.TextBox", "MoonTextMeshRenderer");
        }
        inline app::MoonTextMeshRenderer* create() {
            return il2cpp::create_object<app::MoonTextMeshRenderer>(get_class());
        }
    } // namespace MoonTextMeshRenderer
} // namespace app::classes::types
