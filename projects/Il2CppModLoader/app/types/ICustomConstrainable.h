#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICustomConstrainable {
        inline app::ICustomConstrainable__Class** type_info = (app::ICustomConstrainable__Class**)(modloader::win::memory::resolve_rva(0x047135D0));
        inline app::ICustomConstrainable__Class* get_class() {
            return il2cpp::get_class<app::ICustomConstrainable__Class>(type_info, "Moon.Timeline", "ICustomConstrainable");
        }
    } // namespace ICustomConstrainable
} // namespace app::classes::types
