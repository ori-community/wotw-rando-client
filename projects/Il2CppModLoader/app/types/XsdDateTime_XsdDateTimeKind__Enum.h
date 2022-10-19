#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdDateTime_XsdDateTimeKind__Enum {
        namespace {
            inline app::XsdDateTime_XsdDateTimeKind__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XsdDateTime_XsdDateTimeKind__Enum__Class** type_info = &type_info_ref;
        inline app::XsdDateTime_XsdDateTimeKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdDateTime_XsdDateTimeKind__Enum__Class>(type_info, "System.Xml.Schema", "XsdDateTime", "XsdDateTimeKind");
        }
        inline app::XsdDateTime_XsdDateTimeKind__Enum* create() {
            return il2cpp::create_object<app::XsdDateTime_XsdDateTimeKind__Enum>(get_class());
        }
    } // namespace XsdDateTime_XsdDateTimeKind__Enum
} // namespace app::classes::types
