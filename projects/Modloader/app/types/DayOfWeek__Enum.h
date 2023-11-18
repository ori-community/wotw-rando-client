#pragma once
#include <Modloader/app/structs/DayOfWeek__Enum.h>
#include <Modloader/app/structs/DayOfWeek__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DayOfWeek__Enum {
        inline app::DayOfWeek__Enum__Class** type_info() {
            static app::DayOfWeek__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DayOfWeek__Enum__Class**)(modloader::win::memory::resolve_rva(0x04709508));
            }
            return cache;
        }
        inline app::DayOfWeek__Enum__Class* get_class() {
            return il2cpp::get_class<app::DayOfWeek__Enum__Class>(type_info(), "System", "DayOfWeek");
        }
        inline app::DayOfWeek__Enum* create() {
            return il2cpp::create_object<app::DayOfWeek__Enum>(get_class());
        }
    } // namespace DayOfWeek__Enum
} // namespace app::classes::types
