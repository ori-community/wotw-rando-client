#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_State__Enum {
        namespace {
            app::XsdBuilder_State__Enum__Class* type_info_ref = nullptr;
        }
        app::XsdBuilder_State__Enum__Class** type_info = &type_info_ref;
        inline app::XsdBuilder_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_State__Enum__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "State");
        }
        inline app::XsdBuilder_State__Enum* create() {
            return il2cpp::create_object<app::XsdBuilder_State__Enum>(get_class());
        }
        inline app::XsdBuilder_State__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XsdBuilder_State__Enum__Array>(get_class(), size);
        }
    } // namespace XsdBuilder_State__Enum
} // namespace app::classes::types
