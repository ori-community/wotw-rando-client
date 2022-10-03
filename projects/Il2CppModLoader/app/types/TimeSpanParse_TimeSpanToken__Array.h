#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanToken__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSpanParse_TimeSpanToken__Array__Class** type_info;
        inline app::TimeSpanParse_TimeSpanToken__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanParse_TimeSpanToken__Array__Class>(type_info, "System.Globalization", "TimeSpanParse+TimeSpanToken[]");
        }
        inline app::TimeSpanParse_TimeSpanToken__Array* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanToken__Array>(get_class());
        }
    } // namespace TimeSpanParse_TimeSpanToken__Array
} // namespace app::classes::types
