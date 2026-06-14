#pragma once
#include <Modloader/app/structs/XmlTextWriter_Token__Enum.h>
#include <Modloader/app/structs/XmlTextWriter_Token__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_Token__Enum {
        inline app::XmlTextWriter_Token__Enum__Class** type_info() {
            static app::XmlTextWriter_Token__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlTextWriter_Token__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlTextWriter_Token__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_Token__Enum__Class>(type_info(), "System.Xml", "XmlTextWriter", "Token");
        }
        inline app::XmlTextWriter_Token__Enum* create() {
            return il2cpp::create_object<app::XmlTextWriter_Token__Enum>(get_class());
        }
    } // namespace XmlTextWriter_Token__Enum
} // namespace app::classes::types
