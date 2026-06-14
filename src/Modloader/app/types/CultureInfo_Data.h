#pragma once
#include <Modloader/app/structs/CultureInfo_Data.h>
#include <Modloader/app/structs/CultureInfo_Data__Boxed.h>
#include <Modloader/app/structs/CultureInfo_Data__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CultureInfo_Data {
        inline app::CultureInfo_Data__Class** type_info() {
            static app::CultureInfo_Data__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CultureInfo_Data__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CultureInfo_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::CultureInfo_Data__Class>(type_info(), "System.Globalization", "CultureInfo", "Data");
        }
        inline app::CultureInfo_Data* create() {
            return il2cpp::create_object<app::CultureInfo_Data>(get_class());
        }
        inline app::CultureInfo_Data__Boxed* box(app::CultureInfo_Data value) {
            return il2cpp::box_value<app::CultureInfo_Data__Boxed>(get_class(), value);
        }
    } // namespace CultureInfo_Data
} // namespace app::classes::types
