#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
