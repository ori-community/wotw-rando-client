#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindShaftController {
        inline app::WindShaftController__Class** type_info = (app::WindShaftController__Class**)(modloader::win::memory::resolve_rva(0x0475ED20));
        inline app::WindShaftController__Class* get_class() {
            return il2cpp::get_class<app::WindShaftController__Class>(type_info, "", "WindShaftController");
        }
        inline app::WindShaftController* create() {
            return il2cpp::create_object<app::WindShaftController>(get_class());
        }
    } // namespace WindShaftController
} // namespace app::classes::types
