#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GregorianCalendarTypes__Enum__Class.h>
#include <Modloader/app/structs/GregorianCalendarTypes__Enum.h>

namespace app::classes::types {
    namespace GregorianCalendarTypes__Enum {
        inline app::GregorianCalendarTypes__Enum__Class** type_info = (app::GregorianCalendarTypes__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477CAA8));
        inline app::GregorianCalendarTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::GregorianCalendarTypes__Enum__Class>(type_info, "System.Globalization", "GregorianCalendarTypes");
        }
        inline app::GregorianCalendarTypes__Enum* create() {
            return il2cpp::create_object<app::GregorianCalendarTypes__Enum>(get_class());
        }
    } // namespace GregorianCalendarTypes__Enum
} // namespace app::classes::types
