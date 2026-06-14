#pragma once
#include <Modloader/app/structs/TypeConverter_SimplePropertyDescriptor.h>
#include <Modloader/app/structs/TypeConverter_SimplePropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeConverter_SimplePropertyDescriptor {
        inline app::TypeConverter_SimplePropertyDescriptor__Class** type_info() {
            static app::TypeConverter_SimplePropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeConverter_SimplePropertyDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeConverter_SimplePropertyDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeConverter_SimplePropertyDescriptor__Class>(type_info(), "System.ComponentModel", "TypeConverter", "SimplePropertyDescriptor");
        }
        inline app::TypeConverter_SimplePropertyDescriptor* create() {
            return il2cpp::create_object<app::TypeConverter_SimplePropertyDescriptor>(get_class());
        }
    } // namespace TypeConverter_SimplePropertyDescriptor
} // namespace app::classes::types
