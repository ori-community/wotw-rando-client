#pragma once
#include <Modloader/app/structs/TaiwanCalendar.h>
#include <Modloader/app/structs/TaiwanCalendar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaiwanCalendar {
        inline app::TaiwanCalendar__Class** type_info() {
            static app::TaiwanCalendar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TaiwanCalendar__Class**)(modloader::win::memory::resolve_rva(0x0476F820));
            }
            return cache;
        }
        inline app::TaiwanCalendar__Class* get_class() {
            return il2cpp::get_class<app::TaiwanCalendar__Class>(type_info(), "System.Globalization", "TaiwanCalendar");
        }
        inline app::TaiwanCalendar* create() {
            return il2cpp::create_object<app::TaiwanCalendar>(get_class());
        }
    } // namespace TaiwanCalendar
} // namespace app::classes::types
