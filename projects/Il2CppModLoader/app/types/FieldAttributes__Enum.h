#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FieldAttributes__Enum {
        namespace {
            app::FieldAttributes__Enum__Class* type_info_ref = nullptr;
        }
        app::FieldAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::FieldAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::FieldAttributes__Enum__Class>(type_info, "System.Reflection", "FieldAttributes");
        }
        inline app::FieldAttributes__Enum* create() {
            return il2cpp::create_object<app::FieldAttributes__Enum>(get_class());
        }
    } // namespace FieldAttributes__Enum
} // namespace app::classes::types
