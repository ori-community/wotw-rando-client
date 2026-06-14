#pragma once
#include <Modloader/app/structs/XsdDateTime_DateTimeTypeCode__Enum.h>
#include <Modloader/app/structs/XsdDateTime_DateTimeTypeCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdDateTime_DateTimeTypeCode__Enum {
        inline app::XsdDateTime_DateTimeTypeCode__Enum__Class** type_info() {
            static app::XsdDateTime_DateTimeTypeCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XsdDateTime_DateTimeTypeCode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XsdDateTime_DateTimeTypeCode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdDateTime_DateTimeTypeCode__Enum__Class>(type_info(), "System.Xml.Schema", "XsdDateTime", "DateTimeTypeCode");
        }
        inline app::XsdDateTime_DateTimeTypeCode__Enum* create() {
            return il2cpp::create_object<app::XsdDateTime_DateTimeTypeCode__Enum>(get_class());
        }
    } // namespace XsdDateTime_DateTimeTypeCode__Enum
} // namespace app::classes::types
