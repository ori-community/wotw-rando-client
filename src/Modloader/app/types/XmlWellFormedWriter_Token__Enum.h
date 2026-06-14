#pragma once
#include <Modloader/app/structs/XmlWellFormedWriter_Token__Enum.h>
#include <Modloader/app/structs/XmlWellFormedWriter_Token__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_Token__Enum {
        inline app::XmlWellFormedWriter_Token__Enum__Class** type_info() {
            static app::XmlWellFormedWriter_Token__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlWellFormedWriter_Token__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlWellFormedWriter_Token__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_Token__Enum__Class>(type_info(), "System.Xml", "XmlWellFormedWriter", "Token");
        }
        inline app::XmlWellFormedWriter_Token__Enum* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_Token__Enum>(get_class());
        }
    } // namespace XmlWellFormedWriter_Token__Enum
} // namespace app::classes::types
