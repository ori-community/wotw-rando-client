#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntitySettings {
        inline app::EntitySettings__Class** type_info = (app::EntitySettings__Class**)(modloader::win::memory::resolve_rva(0x0472B7B0));
        inline app::EntitySettings__Class* get_class() {
            return il2cpp::get_class<app::EntitySettings__Class>(type_info, "Moon", "EntitySettings");
        }
        inline app::EntitySettings* create() {
            return il2cpp::create_object<app::EntitySettings>(get_class());
        }
    } // namespace EntitySettings
} // namespace app::classes::types
