#pragma once
#include <Modloader/app/structs/DebugMenuHandler.h>
#include <Modloader/app/structs/DebugMenuHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugMenuHandler {
        inline app::DebugMenuHandler__Class** type_info() {
            static app::DebugMenuHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugMenuHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugMenuHandler__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuHandler__Class>(type_info(), "", "DebugMenuHandler");
        }
        inline app::DebugMenuHandler* create() {
            return il2cpp::create_object<app::DebugMenuHandler>(get_class());
        }
    } // namespace DebugMenuHandler
} // namespace app::classes::types
