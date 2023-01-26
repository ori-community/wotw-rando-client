#pragma once
#include <Modloader/app/structs/OrePickup.h>
#include <Modloader/app/structs/OrePickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrePickup {
        inline app::OrePickup__Class** type_info() {
            static app::OrePickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrePickup__Class**)(modloader::win::memory::resolve_rva(0x04765F88));
            }
            return cache;
        }
        inline app::OrePickup__Class* get_class() {
            return il2cpp::get_class<app::OrePickup__Class>(type_info(), "", "OrePickup");
        }
        inline app::OrePickup* create() {
            return il2cpp::create_object<app::OrePickup>(get_class());
        }
    } // namespace OrePickup
} // namespace app::classes::types
