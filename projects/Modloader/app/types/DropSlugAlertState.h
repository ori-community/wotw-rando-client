#pragma once
#include <Modloader/app/structs/DropSlugAlertState.h>
#include <Modloader/app/structs/DropSlugAlertState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugAlertState {
        inline app::DropSlugAlertState__Class** type_info() {
            static app::DropSlugAlertState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DropSlugAlertState__Class**)(modloader::win::memory::resolve_rva(0x0471F140));
            }
            return cache;
        }
        inline app::DropSlugAlertState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugAlertState__Class>(type_info(), "", "DropSlugAlertState");
        }
        inline app::DropSlugAlertState* create() {
            return il2cpp::create_object<app::DropSlugAlertState>(get_class());
        }
    } // namespace DropSlugAlertState
} // namespace app::classes::types
