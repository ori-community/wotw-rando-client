#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Uri_Flags__Enum {
        namespace {
            app::Uri_Flags__Enum__Class* type_info_ref = nullptr;
        }
        app::Uri_Flags__Enum__Class** type_info = &type_info_ref;
        inline app::Uri_Flags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_Flags__Enum__Class>(type_info, "System", "Uri", "Flags");
        }
        inline app::Uri_Flags__Enum* create() {
            return il2cpp::create_object<app::Uri_Flags__Enum>(get_class());
        }
    } // namespace Uri_Flags__Enum
} // namespace app::classes::types
