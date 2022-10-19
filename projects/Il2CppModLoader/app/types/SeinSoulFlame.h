#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSoulFlame {
        inline app::SeinSoulFlame__Class** type_info = (app::SeinSoulFlame__Class**)(modloader::win::memory::resolve_rva(0x04795B58));
        inline app::SeinSoulFlame__Class* get_class() {
            return il2cpp::get_class<app::SeinSoulFlame__Class>(type_info, "", "SeinSoulFlame");
        }
        inline app::SeinSoulFlame* create() {
            return il2cpp::create_object<app::SeinSoulFlame>(get_class());
        }
    } // namespace SeinSoulFlame
} // namespace app::classes::types
