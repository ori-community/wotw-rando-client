#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CultureInfo_Data {
        namespace {
            inline app::CultureInfo_Data__Class* type_info_ref = nullptr;
        }
        inline app::CultureInfo_Data__Class** type_info = &type_info_ref;
        inline app::CultureInfo_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::CultureInfo_Data__Class>(type_info, "System.Globalization", "CultureInfo", "Data");
        }
        inline app::CultureInfo_Data* create() {
            return il2cpp::create_object<app::CultureInfo_Data>(get_class());
        }
        inline app::CultureInfo_Data__Boxed* box(app::CultureInfo_Data value) {
            return il2cpp::box_value<app::CultureInfo_Data__Boxed>(get_class(), value);
        }
    } // namespace CultureInfo_Data
} // namespace app::classes::types
