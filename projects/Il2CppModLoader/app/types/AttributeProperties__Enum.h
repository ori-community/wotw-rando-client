#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributeProperties__Enum {
        namespace {
            app::AttributeProperties__Enum__Class* type_info_ref = nullptr;
        }
        app::AttributeProperties__Enum__Class** type_info = &type_info_ref;
        inline app::AttributeProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::AttributeProperties__Enum__Class>(type_info, "System.Xml", "AttributeProperties");
        }
        inline app::AttributeProperties__Enum* create() {
            return il2cpp::create_object<app::AttributeProperties__Enum>(get_class());
        }
    } // namespace AttributeProperties__Enum
} // namespace app::classes::types
