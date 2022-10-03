#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSpanTypeInfo__Class** type_info;
        inline app::TimeSpanTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "TimeSpanTypeInfo");
        }
        inline app::TimeSpanTypeInfo* create() {
            return il2cpp::create_object<app::TimeSpanTypeInfo>(get_class());
        }
    } // namespace TimeSpanTypeInfo
} // namespace app::classes::types
