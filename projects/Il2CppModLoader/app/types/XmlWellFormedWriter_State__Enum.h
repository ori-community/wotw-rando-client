#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_State__Enum {
        namespace {
            app::XmlWellFormedWriter_State__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlWellFormedWriter_State__Enum__Class** type_info = &type_info_ref;
        inline app::XmlWellFormedWriter_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_State__Enum__Class>(type_info, "System.Xml", "XmlWellFormedWriter", "State");
        }
        inline app::XmlWellFormedWriter_State__Enum* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_State__Enum>(get_class());
        }
        inline app::XmlWellFormedWriter_State__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlWellFormedWriter_State__Enum__Array>(get_class(), size);
        }
        inline app::XmlWellFormedWriter_State__Enum__Array* create_array(const std::vector<app::XmlWellFormedWriter_State__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::XmlWellFormedWriter_State__Enum__Array>(get_class(), items);
        }
    } // namespace XmlWellFormedWriter_State__Enum
} // namespace app::classes::types
