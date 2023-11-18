#pragma once
#include <Modloader/app/structs/HandledEventHandler.h>
#include <Modloader/app/structs/HandledEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HandledEventHandler {
        inline app::HandledEventHandler__Class** type_info() {
            static app::HandledEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HandledEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HandledEventHandler__Class* get_class() {
            return il2cpp::get_class<app::HandledEventHandler__Class>(type_info(), "System.ComponentModel", "HandledEventHandler");
        }
        inline app::HandledEventHandler* create() {
            return il2cpp::create_object<app::HandledEventHandler>(get_class());
        }
    } // namespace HandledEventHandler
} // namespace app::classes::types
