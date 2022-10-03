#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetupControllerStateHolder_StateControllerMode__Enum {
        namespace {
            app::SetupControllerStateHolder_StateControllerMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SetupControllerStateHolder_StateControllerMode__Enum__Class** type_info = &type_info_ref;
        inline app::SetupControllerStateHolder_StateControllerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SetupControllerStateHolder_StateControllerMode__Enum__Class>(type_info, "", "SetupControllerStateHolder", "StateControllerMode");
        }
        inline app::SetupControllerStateHolder_StateControllerMode__Enum* create() {
            return il2cpp::create_object<app::SetupControllerStateHolder_StateControllerMode__Enum>(get_class());
        }
    } // namespace SetupControllerStateHolder_StateControllerMode__Enum
} // namespace app::classes::types
