#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovingGroundHelper {
        inline app::MovingGroundHelper__Class** type_info = (app::MovingGroundHelper__Class**)(modloader::win::memory::resolve_rva(0x04787870));
        inline app::MovingGroundHelper__Class* get_class() {
            return il2cpp::get_class<app::MovingGroundHelper__Class>(type_info, "", "MovingGroundHelper");
        }
        inline app::MovingGroundHelper* create() {
            return il2cpp::create_object<app::MovingGroundHelper>(get_class());
        }
    } // namespace MovingGroundHelper
} // namespace app::classes::types
