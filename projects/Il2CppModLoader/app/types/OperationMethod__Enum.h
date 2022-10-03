#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OperationMethod__Enum {
        namespace {
            app::OperationMethod__Enum__Class* type_info_ref = nullptr;
        }
        app::OperationMethod__Enum__Class** type_info = &type_info_ref;
        inline app::OperationMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::OperationMethod__Enum__Class>(type_info, "", "OperationMethod");
        }
        inline app::OperationMethod__Enum* create() {
            return il2cpp::create_object<app::OperationMethod__Enum>(get_class());
        }
    } // namespace OperationMethod__Enum
} // namespace app::classes::types
