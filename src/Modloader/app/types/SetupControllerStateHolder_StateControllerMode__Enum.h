#pragma once
#include <Modloader/app/structs/SetupControllerStateHolder_StateControllerMode__Enum.h>
#include <Modloader/app/structs/SetupControllerStateHolder_StateControllerMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupControllerStateHolder_StateControllerMode__Enum {
        inline app::SetupControllerStateHolder_StateControllerMode__Enum__Class** type_info() {
            static app::SetupControllerStateHolder_StateControllerMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetupControllerStateHolder_StateControllerMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetupControllerStateHolder_StateControllerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SetupControllerStateHolder_StateControllerMode__Enum__Class>(type_info(), "", "SetupControllerStateHolder", "StateControllerMode");
        }
        inline app::SetupControllerStateHolder_StateControllerMode__Enum* create() {
            return il2cpp::create_object<app::SetupControllerStateHolder_StateControllerMode__Enum>(get_class());
        }
    } // namespace SetupControllerStateHolder_StateControllerMode__Enum
} // namespace app::classes::types
