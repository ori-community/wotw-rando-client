#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddingNewEventHandler {
        inline app::AddingNewEventHandler__Class** type_info = (app::AddingNewEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04731E10));
        inline app::AddingNewEventHandler__Class* get_class() {
            return il2cpp::get_class<app::AddingNewEventHandler__Class>(type_info, "System.ComponentModel", "AddingNewEventHandler");
        }
        inline app::AddingNewEventHandler* create() {
            return il2cpp::create_object<app::AddingNewEventHandler>(get_class());
        }
    } // namespace AddingNewEventHandler
} // namespace app::classes::types
