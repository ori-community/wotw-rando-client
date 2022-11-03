#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpOrbPickup {
        inline app::ExpOrbPickup__Class** type_info = (app::ExpOrbPickup__Class**)(modloader::win::memory::resolve_rva(0x0470EC20));
        inline app::ExpOrbPickup__Class* get_class() {
            return il2cpp::get_class<app::ExpOrbPickup__Class>(type_info, "", "ExpOrbPickup");
        }
        inline app::ExpOrbPickup* create() {
            return il2cpp::create_object<app::ExpOrbPickup>(get_class());
        }
    } // namespace ExpOrbPickup
} // namespace app::classes::types
