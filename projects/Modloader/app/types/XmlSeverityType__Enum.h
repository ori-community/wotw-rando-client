#pragma once
#include <Modloader/app/structs/XmlSeverityType__Enum.h>
#include <Modloader/app/structs/XmlSeverityType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSeverityType__Enum {
        inline app::XmlSeverityType__Enum__Class** type_info() {
            static app::XmlSeverityType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSeverityType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSeverityType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSeverityType__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSeverityType");
        }
        inline app::XmlSeverityType__Enum* create() {
            return il2cpp::create_object<app::XmlSeverityType__Enum>(get_class());
        }
    } // namespace XmlSeverityType__Enum
} // namespace app::classes::types
