#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnergyOrbPickup__Class.h>
#include <Modloader/app/structs/EnergyOrbPickup.h>

namespace app::classes::types {
    namespace EnergyOrbPickup {
        inline app::EnergyOrbPickup__Class** type_info = (app::EnergyOrbPickup__Class**)(modloader::win::memory::resolve_rva(0x04766C28));
        inline app::EnergyOrbPickup__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPickup__Class>(type_info, "", "EnergyOrbPickup");
        }
        inline app::EnergyOrbPickup* create() {
            return il2cpp::create_object<app::EnergyOrbPickup>(get_class());
        }
    } // namespace EnergyOrbPickup
} // namespace app::classes::types
