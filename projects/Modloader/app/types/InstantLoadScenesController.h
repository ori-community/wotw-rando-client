#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InstantLoadScenesController__Class.h>
#include <Modloader/app/structs/InstantLoadScenesController.h>

namespace app::classes::types {
    namespace InstantLoadScenesController {
        inline app::InstantLoadScenesController__Class** type_info = (app::InstantLoadScenesController__Class**)(modloader::win::memory::resolve_rva(0x0471CD28));
        inline app::InstantLoadScenesController__Class* get_class() {
            return il2cpp::get_class<app::InstantLoadScenesController__Class>(type_info, "", "InstantLoadScenesController");
        }
        inline app::InstantLoadScenesController* create() {
            return il2cpp::create_object<app::InstantLoadScenesController>(get_class());
        }
    } // namespace InstantLoadScenesController
} // namespace app::classes::types
