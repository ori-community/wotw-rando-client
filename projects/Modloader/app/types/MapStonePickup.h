#pragma once
#include <Modloader/app/structs/MapStonePickup.h>
#include <Modloader/app/structs/MapStonePickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapStonePickup {
        inline app::MapStonePickup__Class** type_info() {
            static app::MapStonePickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MapStonePickup__Class**)(modloader::win::memory::resolve_rva(0x04785400));
            }
            return cache;
        }
        inline app::MapStonePickup__Class* get_class() {
            return il2cpp::get_class<app::MapStonePickup__Class>(type_info(), "", "MapStonePickup");
        }
        inline app::MapStonePickup* create() {
            return il2cpp::create_object<app::MapStonePickup>(get_class());
        }
    } // namespace MapStonePickup
} // namespace app::classes::types
