#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanToken {
        namespace {
            app::TimeSpanParse_TimeSpanToken__Class* type_info_ref = nullptr;
        }
        app::TimeSpanParse_TimeSpanToken__Class** type_info = &type_info_ref;
        inline app::TimeSpanParse_TimeSpanToken__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TimeSpanToken__Class>(type_info, "System.Globalization", "TimeSpanParse", "TimeSpanToken");
        }
        inline app::TimeSpanParse_TimeSpanToken* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanToken>(get_class());
        }
        inline app::TimeSpanParse_TimeSpanToken__Boxed* box(app::TimeSpanParse_TimeSpanToken value) {
            return il2cpp::box_value<app::TimeSpanParse_TimeSpanToken__Boxed>(get_class(), value);
        }
        inline app::TimeSpanParse_TimeSpanToken__Array* create_array(int size) {
            return il2cpp::array_new<app::TimeSpanParse_TimeSpanToken__Array>(get_class(), size);
        }
        inline app::TimeSpanParse_TimeSpanToken__Array* create_array(const std::vector<app::TimeSpanParse_TimeSpanToken>& items) {
            return il2cpp::array_new<app::TimeSpanParse_TimeSpanToken__Array>(get_class(), items);
        }
    } // namespace TimeSpanParse_TimeSpanToken
} // namespace app::classes::types
