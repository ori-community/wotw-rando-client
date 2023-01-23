#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSeverityType__Enum__Class.h>
#include <Modloader/app/structs/XmlSeverityType__Enum.h>

namespace app::classes::types {
    namespace XmlSeverityType__Enum {
        namespace {
            inline app::XmlSeverityType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlSeverityType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSeverityType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSeverityType__Enum__Class>(type_info, "System.Xml.Schema", "XmlSeverityType");
        }
        inline app::XmlSeverityType__Enum* create() {
            return il2cpp::create_object<app::XmlSeverityType__Enum>(get_class());
        }
    } // namespace XmlSeverityType__Enum
} // namespace app::classes::types
