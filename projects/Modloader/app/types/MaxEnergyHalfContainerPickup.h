#pragma once
#include <Modloader/app/structs/MaxEnergyHalfContainerPickup.h>
#include <Modloader/app/structs/MaxEnergyHalfContainerPickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaxEnergyHalfContainerPickup {
        inline app::MaxEnergyHalfContainerPickup__Class** type_info() {
            static app::MaxEnergyHalfContainerPickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaxEnergyHalfContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x04792780));
            }
            return cache;
        }
        inline app::MaxEnergyHalfContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxEnergyHalfContainerPickup__Class>(type_info(), "", "MaxEnergyHalfContainerPickup");
        }
        inline app::MaxEnergyHalfContainerPickup* create() {
            return il2cpp::create_object<app::MaxEnergyHalfContainerPickup>(get_class());
        }
    } // namespace MaxEnergyHalfContainerPickup
} // namespace app::classes::types
