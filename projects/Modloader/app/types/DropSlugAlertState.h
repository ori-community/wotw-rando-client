#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugAlertState {
        inline app::DropSlugAlertState__Class** type_info = (app::DropSlugAlertState__Class**)(modloader::win::memory::resolve_rva(0x0471F140));
        inline app::DropSlugAlertState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugAlertState__Class>(type_info, "", "DropSlugAlertState");
        }
        inline app::DropSlugAlertState* create() {
            return il2cpp::create_object<app::DropSlugAlertState>(get_class());
        }
    } // namespace DropSlugAlertState
} // namespace app::classes::types
