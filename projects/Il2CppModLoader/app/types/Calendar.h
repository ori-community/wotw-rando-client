#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Calendar {
        inline app::Calendar__Class** type_info = (app::Calendar__Class**)(modloader::win::memory::resolve_rva(0x04751590));
        inline app::Calendar__Class* get_class() {
            return il2cpp::get_class<app::Calendar__Class>(type_info, "System.Globalization", "Calendar");
        }
        inline app::Calendar* create() {
            return il2cpp::create_object<app::Calendar>(get_class());
        }
    } // namespace Calendar
} // namespace app::classes::types
