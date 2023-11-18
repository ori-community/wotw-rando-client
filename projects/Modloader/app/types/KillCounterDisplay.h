#pragma once
#include <Modloader/app/structs/KillCounterDisplay.h>
#include <Modloader/app/structs/KillCounterDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KillCounterDisplay {
        inline app::KillCounterDisplay__Class** type_info() {
            static app::KillCounterDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KillCounterDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KillCounterDisplay__Class* get_class() {
            return il2cpp::get_class<app::KillCounterDisplay__Class>(type_info(), "", "KillCounterDisplay");
        }
        inline app::KillCounterDisplay* create() {
            return il2cpp::create_object<app::KillCounterDisplay>(get_class());
        }
    } // namespace KillCounterDisplay
} // namespace app::classes::types
