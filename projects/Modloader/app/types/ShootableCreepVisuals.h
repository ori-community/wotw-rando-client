#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShootableCreepVisuals {
        inline app::ShootableCreepVisuals__Class** type_info = (app::ShootableCreepVisuals__Class**)(modloader::win::memory::resolve_rva(0x047279B8));
        inline app::ShootableCreepVisuals__Class* get_class() {
            return il2cpp::get_class<app::ShootableCreepVisuals__Class>(type_info, "", "ShootableCreepVisuals");
        }
        inline app::ShootableCreepVisuals* create() {
            return il2cpp::create_object<app::ShootableCreepVisuals>(get_class());
        }
    } // namespace ShootableCreepVisuals
} // namespace app::classes::types
