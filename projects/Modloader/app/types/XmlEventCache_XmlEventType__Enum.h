#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlEventCache_XmlEventType__Enum__Class.h>
#include <Modloader/app/structs/XmlEventCache_XmlEventType__Enum.h>

namespace app::classes::types {
    namespace XmlEventCache_XmlEventType__Enum {
        namespace {
            inline app::XmlEventCache_XmlEventType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlEventCache_XmlEventType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlEventCache_XmlEventType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlEventCache_XmlEventType__Enum__Class>(type_info, "System.Xml", "XmlEventCache", "XmlEventType");
        }
        inline app::XmlEventCache_XmlEventType__Enum* create() {
            return il2cpp::create_object<app::XmlEventCache_XmlEventType__Enum>(get_class());
        }
    } // namespace XmlEventCache_XmlEventType__Enum
} // namespace app::classes::types
