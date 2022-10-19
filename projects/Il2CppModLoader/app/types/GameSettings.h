#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameSettings {
        inline app::GameSettings__Class** type_info = (app::GameSettings__Class**)(modloader::win::memory::resolve_rva(0x0478D378));
        inline app::GameSettings__Class* get_class() {
            return il2cpp::get_class<app::GameSettings__Class>(type_info, "", "GameSettings");
        }
        inline app::GameSettings* create() {
            return il2cpp::create_object<app::GameSettings>(get_class());
        }
    } // namespace GameSettings
} // namespace app::classes::types
