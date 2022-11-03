#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateController {
        inline app::UberStateController__Class** type_info = (app::UberStateController__Class**)(modloader::win::memory::resolve_rva(0x04739128));
        inline app::UberStateController__Class* get_class() {
            return il2cpp::get_class<app::UberStateController__Class>(type_info, "Moon", "UberStateController");
        }
        inline app::UberStateController* create() {
            return il2cpp::create_object<app::UberStateController>(get_class());
        }
    } // namespace UberStateController
} // namespace app::classes::types
