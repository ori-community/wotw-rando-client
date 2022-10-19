#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeZoneInfo__Array {
        namespace {
            inline app::TimeZoneInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::TimeZoneInfo__Array__Class** type_info = &type_info_ref;
        inline app::TimeZoneInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneInfo__Array__Class>(type_info, "System", "TimeZoneInfo[]");
        }
        inline app::TimeZoneInfo__Array* create() {
            return il2cpp::create_object<app::TimeZoneInfo__Array>(get_class());
        }
    } // namespace TimeZoneInfo__Array
} // namespace app::classes::types
