#pragma once
#include <Modloader/app/structs/CursorController.h>
#include <Modloader/app/structs/CursorController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CursorController {
        inline app::CursorController__Class** type_info() {
            static app::CursorController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CursorController__Class**)(modloader::win::memory::resolve_rva(0x04708880));
            }
            return cache;
        }
        inline app::CursorController__Class* get_class() {
            return il2cpp::get_class<app::CursorController__Class>(type_info(), "", "CursorController");
        }
        inline app::CursorController* create() {
            return il2cpp::create_object<app::CursorController>(get_class());
        }
    } // namespace CursorController
} // namespace app::classes::types
