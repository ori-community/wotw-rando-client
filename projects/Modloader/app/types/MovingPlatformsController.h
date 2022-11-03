#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovingPlatformsController {
        inline app::MovingPlatformsController__Class** type_info = (app::MovingPlatformsController__Class**)(modloader::win::memory::resolve_rva(0x04747218));
        inline app::MovingPlatformsController__Class* get_class() {
            return il2cpp::get_class<app::MovingPlatformsController__Class>(type_info, "", "MovingPlatformsController");
        }
        inline app::MovingPlatformsController* create() {
            return il2cpp::create_object<app::MovingPlatformsController>(get_class());
        }
    } // namespace MovingPlatformsController
} // namespace app::classes::types
