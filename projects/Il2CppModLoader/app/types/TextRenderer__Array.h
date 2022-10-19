#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextRenderer__Array {
        inline app::TextRenderer__Array__Class** type_info = (app::TextRenderer__Array__Class**)(modloader::win::memory::resolve_rva(0x04733490));
        inline app::TextRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::TextRenderer__Array__Class>(type_info, "CatlikeCoding.TextBox", "TextRenderer[]");
        }
        inline app::TextRenderer__Array* create() {
            return il2cpp::create_object<app::TextRenderer__Array>(get_class());
        }
    } // namespace TextRenderer__Array
} // namespace app::classes::types
