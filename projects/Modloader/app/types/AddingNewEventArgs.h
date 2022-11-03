#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddingNewEventArgs {
        inline app::AddingNewEventArgs__Class** type_info = (app::AddingNewEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04789950));
        inline app::AddingNewEventArgs__Class* get_class() {
            return il2cpp::get_class<app::AddingNewEventArgs__Class>(type_info, "System.ComponentModel", "AddingNewEventArgs");
        }
        inline app::AddingNewEventArgs* create() {
            return il2cpp::create_object<app::AddingNewEventArgs>(get_class());
        }
    } // namespace AddingNewEventArgs
} // namespace app::classes::types
