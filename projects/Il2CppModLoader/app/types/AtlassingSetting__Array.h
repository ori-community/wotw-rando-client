#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AtlassingSetting__Array {
        inline app::AtlassingSetting__Array__Class** type_info = (app::AtlassingSetting__Array__Class**)(modloader::win::memory::resolve_rva(0x0472EE08));
        inline app::AtlassingSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::AtlassingSetting__Array__Class>(type_info, "", "AtlassingSetting[]");
        }
        inline app::AtlassingSetting__Array* create() {
            return il2cpp::create_object<app::AtlassingSetting__Array>(get_class());
        }
    } // namespace AtlassingSetting__Array
} // namespace app::classes::types
