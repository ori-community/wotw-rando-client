#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GUIController__Class.h>
#include <Modloader/app/structs/GUIController.h>

namespace app::classes::types {
    namespace GUIController {
        inline app::GUIController__Class** type_info = (app::GUIController__Class**)(modloader::win::memory::resolve_rva(0x047238C8));
        inline app::GUIController__Class* get_class() {
            return il2cpp::get_class<app::GUIController__Class>(type_info, "", "GUIController");
        }
        inline app::GUIController* create() {
            return il2cpp::create_object<app::GUIController>(get_class());
        }
    } // namespace GUIController
} // namespace app::classes::types
