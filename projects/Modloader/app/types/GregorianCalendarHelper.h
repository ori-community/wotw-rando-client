#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GregorianCalendarHelper {
        inline app::GregorianCalendarHelper__Class** type_info = (app::GregorianCalendarHelper__Class**)(modloader::win::memory::resolve_rva(0x047314B0));
        inline app::GregorianCalendarHelper__Class* get_class() {
            return il2cpp::get_class<app::GregorianCalendarHelper__Class>(type_info, "System.Globalization", "GregorianCalendarHelper");
        }
        inline app::GregorianCalendarHelper* create() {
            return il2cpp::create_object<app::GregorianCalendarHelper>(get_class());
        }
    } // namespace GregorianCalendarHelper
} // namespace app::classes::types
