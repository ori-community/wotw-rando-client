#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmbienceListener {
        inline app::AmbienceListener__Class** type_info = (app::AmbienceListener__Class**)(modloader::win::memory::resolve_rva(0x0479A1B0));
        inline app::AmbienceListener__Class* get_class() {
            return il2cpp::get_class<app::AmbienceListener__Class>(type_info, "", "AmbienceListener");
        }
        inline app::AmbienceListener* create() {
            return il2cpp::create_object<app::AmbienceListener>(get_class());
        }
    } // namespace AmbienceListener
} // namespace app::classes::types
