#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FormatProvider_Number {
        inline app::FormatProvider_Number__Class** type_info = (app::FormatProvider_Number__Class**)(modloader::win::memory::resolve_rva(0x04731B28));
        inline app::FormatProvider_Number__Class* get_class() {
            return il2cpp::get_nested_class<app::FormatProvider_Number__Class>(type_info, "System.Globalization", "FormatProvider", "Number");
        }
        inline app::FormatProvider_Number* create() {
            return il2cpp::create_object<app::FormatProvider_Number>(get_class());
        }
    } // namespace FormatProvider_Number
} // namespace app::classes::types
