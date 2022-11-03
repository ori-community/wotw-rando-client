#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapStonePickup {
        inline app::MapStonePickup__Class** type_info = (app::MapStonePickup__Class**)(modloader::win::memory::resolve_rva(0x04785400));
        inline app::MapStonePickup__Class* get_class() {
            return il2cpp::get_class<app::MapStonePickup__Class>(type_info, "", "MapStonePickup");
        }
        inline app::MapStonePickup* create() {
            return il2cpp::create_object<app::MapStonePickup>(get_class());
        }
    } // namespace MapStonePickup
} // namespace app::classes::types
