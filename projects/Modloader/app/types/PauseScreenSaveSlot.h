#pragma once
#include <Modloader/app/structs/PauseScreenSaveSlot.h>
#include <Modloader/app/structs/PauseScreenSaveSlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PauseScreenSaveSlot {
        inline app::PauseScreenSaveSlot__Class** type_info() {
            static app::PauseScreenSaveSlot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PauseScreenSaveSlot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PauseScreenSaveSlot__Class* get_class() {
            return il2cpp::get_class<app::PauseScreenSaveSlot__Class>(type_info(), "", "PauseScreenSaveSlot");
        }
        inline app::PauseScreenSaveSlot* create() {
            return il2cpp::create_object<app::PauseScreenSaveSlot>(get_class());
        }
    } // namespace PauseScreenSaveSlot
} // namespace app::classes::types
