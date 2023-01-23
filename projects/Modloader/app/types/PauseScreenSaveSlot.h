#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PauseScreenSaveSlot__Class.h>
#include <Modloader/app/structs/PauseScreenSaveSlot.h>

namespace app::classes::types {
    namespace PauseScreenSaveSlot {
        namespace {
            inline app::PauseScreenSaveSlot__Class* type_info_ref = nullptr;
        }
        inline app::PauseScreenSaveSlot__Class** type_info = &type_info_ref;
        inline app::PauseScreenSaveSlot__Class* get_class() {
            return il2cpp::get_class<app::PauseScreenSaveSlot__Class>(type_info, "", "PauseScreenSaveSlot");
        }
        inline app::PauseScreenSaveSlot* create() {
            return il2cpp::create_object<app::PauseScreenSaveSlot>(get_class());
        }
    } // namespace PauseScreenSaveSlot
} // namespace app::classes::types
