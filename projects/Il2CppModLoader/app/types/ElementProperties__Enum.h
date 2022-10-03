#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ElementProperties__Enum {
        namespace {
            app::ElementProperties__Enum__Class* type_info_ref = nullptr;
        }
        app::ElementProperties__Enum__Class** type_info = &type_info_ref;
        inline app::ElementProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::ElementProperties__Enum__Class>(type_info, "System.Xml", "ElementProperties");
        }
        inline app::ElementProperties__Enum* create() {
            return il2cpp::create_object<app::ElementProperties__Enum>(get_class());
        }
    } // namespace ElementProperties__Enum
} // namespace app::classes::types
