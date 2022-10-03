#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdDateTime_DateTimeTypeCode__Enum {
        namespace {
            app::XsdDateTime_DateTimeTypeCode__Enum__Class* type_info_ref = nullptr;
        }
        app::XsdDateTime_DateTimeTypeCode__Enum__Class** type_info = &type_info_ref;
        inline app::XsdDateTime_DateTimeTypeCode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdDateTime_DateTimeTypeCode__Enum__Class>(type_info, "System.Xml.Schema", "XsdDateTime", "DateTimeTypeCode");
        }
        inline app::XsdDateTime_DateTimeTypeCode__Enum* create() {
            return il2cpp::create_object<app::XsdDateTime_DateTimeTypeCode__Enum>(get_class());
        }
    } // namespace XsdDateTime_DateTimeTypeCode__Enum
} // namespace app::classes::types
