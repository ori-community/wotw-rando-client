#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CursorController {
        inline app::CursorController__Class** type_info = (app::CursorController__Class**)(modloader::win::memory::resolve_rva(0x04708880));
        inline app::CursorController__Class* get_class() {
            return il2cpp::get_class<app::CursorController__Class>(type_info, "", "CursorController");
        }
        inline app::CursorController* create() {
            return il2cpp::create_object<app::CursorController>(get_class());
        }
    } // namespace CursorController
} // namespace app::classes::types
