#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CalendarId__Enum__Class.h>
#include <Modloader/app/structs/CalendarId__Enum.h>

namespace app::classes::types {
    namespace CalendarId__Enum {
        namespace {
            inline app::CalendarId__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CalendarId__Enum__Class** type_info = &type_info_ref;
        inline app::CalendarId__Enum__Class* get_class() {
            return il2cpp::get_class<app::CalendarId__Enum__Class>(type_info, "System.Globalization", "CalendarId");
        }
        inline app::CalendarId__Enum* create() {
            return il2cpp::create_object<app::CalendarId__Enum>(get_class());
        }
    } // namespace CalendarId__Enum
} // namespace app::classes::types
