#pragma once
#include <Modloader/app/structs/PickupOrbSystem.h>
#include <Modloader/app/structs/PickupOrbSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickupOrbSystem {
        inline app::PickupOrbSystem__Class** type_info() {
            static app::PickupOrbSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PickupOrbSystem__Class**)(modloader::win::memory::resolve_rva(0x04719C98));
            }
            return cache;
        }
        inline app::PickupOrbSystem__Class* get_class() {
            return il2cpp::get_class<app::PickupOrbSystem__Class>(type_info(), "", "PickupOrbSystem");
        }
        inline app::PickupOrbSystem* create() {
            return il2cpp::create_object<app::PickupOrbSystem>(get_class());
        }
    } // namespace PickupOrbSystem
} // namespace app::classes::types
