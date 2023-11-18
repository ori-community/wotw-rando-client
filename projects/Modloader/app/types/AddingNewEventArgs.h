#pragma once
#include <Modloader/app/structs/AddingNewEventArgs.h>
#include <Modloader/app/structs/AddingNewEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddingNewEventArgs {
        inline app::AddingNewEventArgs__Class** type_info() {
            static app::AddingNewEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddingNewEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04789950));
            }
            return cache;
        }
        inline app::AddingNewEventArgs__Class* get_class() {
            return il2cpp::get_class<app::AddingNewEventArgs__Class>(type_info(), "System.ComponentModel", "AddingNewEventArgs");
        }
        inline app::AddingNewEventArgs* create() {
            return il2cpp::create_object<app::AddingNewEventArgs>(get_class());
        }
    } // namespace AddingNewEventArgs
} // namespace app::classes::types
