#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextMeshRenderer {
        inline app::TextMeshRenderer__Class** type_info = (app::TextMeshRenderer__Class**)(modloader::win::memory::resolve_rva(0x0473D570));
        inline app::TextMeshRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextMeshRenderer__Class>(type_info, "CatlikeCoding.TextBox", "TextMeshRenderer");
        }
        inline app::TextMeshRenderer* create() {
            return il2cpp::create_object<app::TextMeshRenderer>(get_class());
        }
    } // namespace TextMeshRenderer
} // namespace app::classes::types
