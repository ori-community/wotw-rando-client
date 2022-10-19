#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Characters {
        inline app::Characters__Class** type_info = (app::Characters__Class**)(modloader::win::memory::resolve_rva(0x047340C0));
        inline app::Characters__Class* get_class() {
            return il2cpp::get_class<app::Characters__Class>(type_info, "Game", "Characters");
        }
        inline app::Characters* create() {
            return il2cpp::create_object<app::Characters>(get_class());
        }
    } // namespace Characters
} // namespace app::classes::types
