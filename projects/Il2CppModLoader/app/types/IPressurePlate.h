#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPressurePlate {
        inline app::IPressurePlate__Class** type_info = (app::IPressurePlate__Class**)(modloader::win::memory::resolve_rva(0x04779F58));
        inline app::IPressurePlate__Class* get_class() {
            return il2cpp::get_class<app::IPressurePlate__Class>(type_info, "", "IPressurePlate");
        }
    } // namespace IPressurePlate
} // namespace app::classes::types
