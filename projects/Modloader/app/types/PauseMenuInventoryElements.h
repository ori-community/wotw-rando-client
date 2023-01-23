#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PauseMenuInventoryElements__Class.h>
#include <Modloader/app/structs/PauseMenuInventoryElements.h>

namespace app::classes::types {
    namespace PauseMenuInventoryElements {
        namespace {
            inline app::PauseMenuInventoryElements__Class* type_info_ref = nullptr;
        }
        inline app::PauseMenuInventoryElements__Class** type_info = &type_info_ref;
        inline app::PauseMenuInventoryElements__Class* get_class() {
            return il2cpp::get_class<app::PauseMenuInventoryElements__Class>(type_info, "", "PauseMenuInventoryElements");
        }
        inline app::PauseMenuInventoryElements* create() {
            return il2cpp::create_object<app::PauseMenuInventoryElements>(get_class());
        }
    } // namespace PauseMenuInventoryElements
} // namespace app::classes::types
