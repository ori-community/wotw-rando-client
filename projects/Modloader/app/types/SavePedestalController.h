#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SavePedestalController__Class.h>
#include <Modloader/app/structs/SavePedestalController.h>

namespace app::classes::types {
    namespace SavePedestalController {
        inline app::SavePedestalController__Class** type_info = (app::SavePedestalController__Class**)(modloader::win::memory::resolve_rva(0x047947C8));
        inline app::SavePedestalController__Class* get_class() {
            return il2cpp::get_class<app::SavePedestalController__Class>(type_info, "", "SavePedestalController");
        }
        inline app::SavePedestalController* create() {
            return il2cpp::create_object<app::SavePedestalController>(get_class());
        }
    } // namespace SavePedestalController
} // namespace app::classes::types
