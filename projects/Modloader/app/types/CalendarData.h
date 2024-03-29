#pragma once
#include <Modloader/app/structs/CalendarData.h>
#include <Modloader/app/structs/CalendarData__Array.h>
#include <Modloader/app/structs/CalendarData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CalendarData {
        inline app::CalendarData__Class** type_info() {
            static app::CalendarData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CalendarData__Class**)(modloader::win::memory::resolve_rva(0x04773E68));
            }
            return cache;
        }
        inline app::CalendarData__Class* get_class() {
            return il2cpp::get_class<app::CalendarData__Class>(type_info(), "System.Globalization", "CalendarData");
        }
        inline app::CalendarData* create() {
            return il2cpp::create_object<app::CalendarData>(get_class());
        }
        inline app::CalendarData__Array* create_array(int size) {
            return il2cpp::array_new<app::CalendarData__Array>(get_class(), size);
        }
        inline app::CalendarData__Array* create_array(const std::vector<app::CalendarData*>& items) {
            return il2cpp::array_new<app::CalendarData__Array>(get_class(), items);
        }
    } // namespace CalendarData
} // namespace app::classes::types
