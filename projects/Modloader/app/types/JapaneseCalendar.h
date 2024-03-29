#pragma once
#include <Modloader/app/structs/JapaneseCalendar.h>
#include <Modloader/app/structs/JapaneseCalendar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JapaneseCalendar {
        inline app::JapaneseCalendar__Class** type_info() {
            static app::JapaneseCalendar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JapaneseCalendar__Class**)(modloader::win::memory::resolve_rva(0x04730838));
            }
            return cache;
        }
        inline app::JapaneseCalendar__Class* get_class() {
            return il2cpp::get_class<app::JapaneseCalendar__Class>(type_info(), "System.Globalization", "JapaneseCalendar");
        }
        inline app::JapaneseCalendar* create() {
            return il2cpp::create_object<app::JapaneseCalendar>(get_class());
        }
    } // namespace JapaneseCalendar
} // namespace app::classes::types
