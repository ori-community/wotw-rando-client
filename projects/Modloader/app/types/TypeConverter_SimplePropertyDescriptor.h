#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeConverter_SimplePropertyDescriptor {
        namespace {
            inline app::TypeConverter_SimplePropertyDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::TypeConverter_SimplePropertyDescriptor__Class** type_info = &type_info_ref;
        inline app::TypeConverter_SimplePropertyDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeConverter_SimplePropertyDescriptor__Class>(type_info, "System.ComponentModel", "TypeConverter", "SimplePropertyDescriptor");
        }
        inline app::TypeConverter_SimplePropertyDescriptor* create() {
            return il2cpp::create_object<app::TypeConverter_SimplePropertyDescriptor>(get_class());
        }
    } // namespace TypeConverter_SimplePropertyDescriptor
} // namespace app::classes::types
