#pragma once
#include <Modloader/app/structs/ActionWithDuration.h>
#include <Modloader/app/structs/ActionWithDuration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionWithDuration {
        inline app::ActionWithDuration__Class** type_info() {
            static app::ActionWithDuration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActionWithDuration__Class**)(modloader::win::memory::resolve_rva(0x04760B80));
            }
            return cache;
        }
        inline app::ActionWithDuration__Class* get_class() {
            return il2cpp::get_class<app::ActionWithDuration__Class>(type_info(), "", "ActionWithDuration");
        }
        inline app::ActionWithDuration* create() {
            return il2cpp::create_object<app::ActionWithDuration>(get_class());
        }
    } // namespace ActionWithDuration
} // namespace app::classes::types
