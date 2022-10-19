#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BatSwarmerSettings {
        inline app::BatSwarmerSettings__Class** type_info = (app::BatSwarmerSettings__Class**)(modloader::win::memory::resolve_rva(0x04789668));
        inline app::BatSwarmerSettings__Class* get_class() {
            return il2cpp::get_class<app::BatSwarmerSettings__Class>(type_info, "", "BatSwarmerSettings");
        }
        inline app::BatSwarmerSettings* create() {
            return il2cpp::create_object<app::BatSwarmerSettings>(get_class());
        }
    } // namespace BatSwarmerSettings
} // namespace app::classes::types
