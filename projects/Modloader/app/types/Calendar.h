#pragma once
#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/Calendar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Calendar {
        inline app::Calendar__Class** type_info() {
            static app::Calendar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Calendar__Class**)(modloader::win::memory::resolve_rva(0x04751590));
            }
            return cache;
        }
        inline app::Calendar__Class* get_class() {
            return il2cpp::get_class<app::Calendar__Class>(type_info(), "System.Globalization", "Calendar");
        }
        inline app::Calendar* create() {
            return il2cpp::create_object<app::Calendar>(get_class());
        }
    } // namespace Calendar
} // namespace app::classes::types
