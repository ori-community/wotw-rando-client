#pragma once
#include <Modloader/app/structs/TimeSpanFormat.h>
#include <Modloader/app/structs/TimeSpanFormat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSpanFormat {
        inline app::TimeSpanFormat__Class** type_info() {
            static app::TimeSpanFormat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSpanFormat__Class**)(modloader::win::memory::resolve_rva(0x0471BA48));
            }
            return cache;
        }
        inline app::TimeSpanFormat__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanFormat__Class>(type_info(), "System.Globalization", "TimeSpanFormat");
        }
        inline app::TimeSpanFormat* create() {
            return il2cpp::create_object<app::TimeSpanFormat>(get_class());
        }
    } // namespace TimeSpanFormat
} // namespace app::classes::types
