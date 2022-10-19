#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugEntity_c_DisplayClass48_0 {
        inline app::SneezeSlugEntity_c_DisplayClass48_0__Class** type_info = (app::SneezeSlugEntity_c_DisplayClass48_0__Class**)(modloader::win::memory::resolve_rva(0x04776320));
        inline app::SneezeSlugEntity_c_DisplayClass48_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugEntity_c_DisplayClass48_0__Class>(type_info, "", "SneezeSlugEntity", "<>c__DisplayClass48_0");
        }
        inline app::SneezeSlugEntity_c_DisplayClass48_0* create() {
            return il2cpp::create_object<app::SneezeSlugEntity_c_DisplayClass48_0>(get_class());
        }
    } // namespace SneezeSlugEntity_c_DisplayClass48_0
} // namespace app::classes::types
