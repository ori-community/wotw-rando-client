#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraPuppetController {
        inline app::CameraPuppetController__Class** type_info = (app::CameraPuppetController__Class**)(modloader::win::memory::resolve_rva(0x04773108));
        inline app::CameraPuppetController__Class* get_class() {
            return il2cpp::get_class<app::CameraPuppetController__Class>(type_info, "", "CameraPuppetController");
        }
        inline app::CameraPuppetController* create() {
            return il2cpp::create_object<app::CameraPuppetController>(get_class());
        }
    } // namespace CameraPuppetController
} // namespace app::classes::types
