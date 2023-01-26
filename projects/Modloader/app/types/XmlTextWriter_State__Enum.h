#pragma once
#include <Modloader/app/structs/XmlTextWriter_State__Enum.h>
#include <Modloader/app/structs/XmlTextWriter_State__Enum__Array.h>
#include <Modloader/app/structs/XmlTextWriter_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_State__Enum {
        inline app::XmlTextWriter_State__Enum__Class** type_info() {
            static app::XmlTextWriter_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlTextWriter_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlTextWriter_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_State__Enum__Class>(type_info(), "System.Xml", "XmlTextWriter", "State");
        }
        inline app::XmlTextWriter_State__Enum* create() {
            return il2cpp::create_object<app::XmlTextWriter_State__Enum>(get_class());
        }
        inline app::XmlTextWriter_State__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTextWriter_State__Enum__Array>(get_class(), size);
        }
        inline app::XmlTextWriter_State__Enum__Array* create_array(const std::vector<app::XmlTextWriter_State__Enum*>& items) {
            return il2cpp::array_new<app::XmlTextWriter_State__Enum__Array>(get_class(), items);
        }
    } // namespace XmlTextWriter_State__Enum
} // namespace app::classes::types
