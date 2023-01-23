#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DoorVisuals__Class.h>
#include <Modloader/app/structs/DoorVisuals.h>

namespace app::classes::types {
    namespace DoorVisuals {
        inline app::DoorVisuals__Class** type_info = (app::DoorVisuals__Class**)(modloader::win::memory::resolve_rva(0x04727A60));
        inline app::DoorVisuals__Class* get_class() {
            return il2cpp::get_class<app::DoorVisuals__Class>(type_info, "", "DoorVisuals");
        }
        inline app::DoorVisuals* create() {
            return il2cpp::create_object<app::DoorVisuals>(get_class());
        }
    } // namespace DoorVisuals
} // namespace app::classes::types
