#pragma once
#include <Modloader/app/structs/CalendarData__Array.h>
#include <Modloader/app/structs/CalendarData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CalendarData__Array {
        inline app::CalendarData__Array__Class** type_info() {
            static app::CalendarData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CalendarData__Array__Class**)(modloader::win::memory::resolve_rva(0x04752070));
            }
            return cache;
        }
        inline app::CalendarData__Array__Class* get_class() {
            return il2cpp::get_class<app::CalendarData__Array__Class>(type_info(), "System.Globalization", "CalendarData[]");
        }
        inline app::CalendarData__Array* create() {
            return il2cpp::create_object<app::CalendarData__Array>(get_class());
        }
    } // namespace CalendarData__Array
} // namespace app::classes::types
