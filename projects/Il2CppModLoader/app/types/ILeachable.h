#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILeachable {
        inline app::ILeachable__Class** type_info = (app::ILeachable__Class**)(modloader::win::memory::resolve_rva(0x0473D450));
        inline app::ILeachable__Class* get_class() {
            return il2cpp::get_class<app::ILeachable__Class>(type_info, "", "ILeachable");
        }
    } // namespace ILeachable
} // namespace app::classes::types
