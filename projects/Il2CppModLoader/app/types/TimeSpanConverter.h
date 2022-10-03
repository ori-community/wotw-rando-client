#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanConverter {
        namespace {
            app::TimeSpanConverter__Class* type_info_ref = nullptr;
        }
        app::TimeSpanConverter__Class** type_info = &type_info_ref;
        inline app::TimeSpanConverter__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanConverter__Class>(type_info, "System.ComponentModel", "TimeSpanConverter");
        }
        inline app::TimeSpanConverter* create() {
            return il2cpp::create_object<app::TimeSpanConverter>(get_class());
        }
    } // namespace TimeSpanConverter
} // namespace app::classes::types
