#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSoulFlame_c {
        inline app::SeinSoulFlame_c__Class** type_info = (app::SeinSoulFlame_c__Class**)(modloader::win::memory::resolve_rva(0x04736118));
        inline app::SeinSoulFlame_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSoulFlame_c__Class>(type_info, "", "SeinSoulFlame", "<>c");
        }
        inline app::SeinSoulFlame_c* create() {
            return il2cpp::create_object<app::SeinSoulFlame_c>(get_class());
        }
    } // namespace SeinSoulFlame_c
} // namespace app::classes::types
