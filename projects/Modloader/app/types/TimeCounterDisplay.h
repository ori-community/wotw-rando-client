#pragma once
#include <Modloader/app/structs/TimeCounterDisplay.h>
#include <Modloader/app/structs/TimeCounterDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeCounterDisplay {
        inline app::TimeCounterDisplay__Class** type_info() {
            static app::TimeCounterDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeCounterDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeCounterDisplay__Class* get_class() {
            return il2cpp::get_class<app::TimeCounterDisplay__Class>(type_info(), "", "TimeCounterDisplay");
        }
        inline app::TimeCounterDisplay* create() {
            return il2cpp::create_object<app::TimeCounterDisplay>(get_class());
        }
    } // namespace TimeCounterDisplay
} // namespace app::classes::types
