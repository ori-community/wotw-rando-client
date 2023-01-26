#pragma once
#include <Modloader/app/structs/AddingNewEventHandler.h>
#include <Modloader/app/structs/AddingNewEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddingNewEventHandler {
        inline app::AddingNewEventHandler__Class** type_info() {
            static app::AddingNewEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddingNewEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04731E10));
            }
            return cache;
        }
        inline app::AddingNewEventHandler__Class* get_class() {
            return il2cpp::get_class<app::AddingNewEventHandler__Class>(type_info(), "System.ComponentModel", "AddingNewEventHandler");
        }
        inline app::AddingNewEventHandler* create() {
            return il2cpp::create_object<app::AddingNewEventHandler>(get_class());
        }
    } // namespace AddingNewEventHandler
} // namespace app::classes::types
