#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XsdDateTime_XsdDateTimeKind__Enum__Class.h>
#include <Modloader/app/structs/XsdDateTime_XsdDateTimeKind__Enum.h>

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
