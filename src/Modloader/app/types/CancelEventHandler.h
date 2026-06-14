#pragma once
#include <Modloader/app/structs/CancelEventHandler.h>
#include <Modloader/app/structs/CancelEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelEventHandler {
        inline app::CancelEventHandler__Class** type_info() {
            static app::CancelEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CancelEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CancelEventHandler__Class* get_class() {
            return il2cpp::get_class<app::CancelEventHandler__Class>(type_info(), "System.ComponentModel", "CancelEventHandler");
        }
        inline app::CancelEventHandler* create() {
            return il2cpp::create_object<app::CancelEventHandler>(get_class());
        }
    } // namespace CancelEventHandler
} // namespace app::classes::types
