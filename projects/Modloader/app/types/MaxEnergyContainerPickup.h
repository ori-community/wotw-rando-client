#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaxEnergyContainerPickup__Class.h>
#include <Modloader/app/structs/MaxEnergyContainerPickup.h>

namespace app::classes::types {
    namespace MaxEnergyContainerPickup {
        inline app::MaxEnergyContainerPickup__Class** type_info = (app::MaxEnergyContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x0470D828));
        inline app::MaxEnergyContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxEnergyContainerPickup__Class>(type_info, "", "MaxEnergyContainerPickup");
        }
        inline app::MaxEnergyContainerPickup* create() {
            return il2cpp::create_object<app::MaxEnergyContainerPickup>(get_class());
        }
    } // namespace MaxEnergyContainerPickup
} // namespace app::classes::types
