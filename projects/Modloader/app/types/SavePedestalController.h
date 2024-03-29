#pragma once
#include <Modloader/app/structs/SavePedestalController.h>
#include <Modloader/app/structs/SavePedestalController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SavePedestalController {
        inline app::SavePedestalController__Class** type_info() {
            static app::SavePedestalController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SavePedestalController__Class**)(modloader::win::memory::resolve_rva(0x047947C8));
            }
            return cache;
        }
        inline app::SavePedestalController__Class* get_class() {
            return il2cpp::get_class<app::SavePedestalController__Class>(type_info(), "", "SavePedestalController");
        }
        inline app::SavePedestalController* create() {
            return il2cpp::create_object<app::SavePedestalController>(get_class());
        }
    } // namespace SavePedestalController
} // namespace app::classes::types
