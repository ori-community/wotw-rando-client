#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BombableWallVisuals {
        inline app::BombableWallVisuals__Class** type_info = (app::BombableWallVisuals__Class**)(modloader::win::memory::resolve_rva(0x04727250));
        inline app::BombableWallVisuals__Class* get_class() {
            return il2cpp::get_class<app::BombableWallVisuals__Class>(type_info, "", "BombableWallVisuals");
        }
        inline app::BombableWallVisuals* create() {
            return il2cpp::create_object<app::BombableWallVisuals>(get_class());
        }
    } // namespace BombableWallVisuals
} // namespace app::classes::types
