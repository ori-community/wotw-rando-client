#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AlphaCombineMode__Enum {
        namespace {
            app::AlphaCombineMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AlphaCombineMode__Enum__Class** type_info = &type_info_ref;
        inline app::AlphaCombineMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlphaCombineMode__Enum__Class>(type_info, "", "AlphaCombineMode");
        }
        inline app::AlphaCombineMode__Enum* create() {
            return il2cpp::create_object<app::AlphaCombineMode__Enum>(get_class());
        }
    } // namespace AlphaCombineMode__Enum
} // namespace app::classes::types
