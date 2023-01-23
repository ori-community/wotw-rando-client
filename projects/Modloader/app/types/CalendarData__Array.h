#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CalendarData__Array__Class.h>
#include <Modloader/app/structs/CalendarData__Array.h>

namespace app::classes::types {
    namespace CalendarData__Array {
        inline app::CalendarData__Array__Class** type_info = (app::CalendarData__Array__Class**)(modloader::win::memory::resolve_rva(0x04752070));
        inline app::CalendarData__Array__Class* get_class() {
            return il2cpp::get_class<app::CalendarData__Array__Class>(type_info, "System.Globalization", "CalendarData[]");
        }
        inline app::CalendarData__Array* create() {
            return il2cpp::create_object<app::CalendarData__Array>(get_class());
        }
    } // namespace CalendarData__Array
} // namespace app::classes::types
