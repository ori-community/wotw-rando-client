#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PickupOrbSystem {
        inline app::PickupOrbSystem__Class** type_info = (app::PickupOrbSystem__Class**)(modloader::win::memory::resolve_rva(0x04719C98));
        inline app::PickupOrbSystem__Class* get_class() {
            return il2cpp::get_class<app::PickupOrbSystem__Class>(type_info, "", "PickupOrbSystem");
        }
        inline app::PickupOrbSystem* create() {
            return il2cpp::create_object<app::PickupOrbSystem>(get_class());
        }
    } // namespace PickupOrbSystem
} // namespace app::classes::types
