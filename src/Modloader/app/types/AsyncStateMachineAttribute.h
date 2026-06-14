#pragma once
#include <Modloader/app/structs/AsyncStateMachineAttribute.h>
#include <Modloader/app/structs/AsyncStateMachineAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncStateMachineAttribute {
        inline app::AsyncStateMachineAttribute__Class** type_info() {
            static app::AsyncStateMachineAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncStateMachineAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncStateMachineAttribute__Class* get_class() {
            return il2cpp::get_class<app::AsyncStateMachineAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "AsyncStateMachineAttribute");
        }
        inline app::AsyncStateMachineAttribute* create() {
            return il2cpp::create_object<app::AsyncStateMachineAttribute>(get_class());
        }
    } // namespace AsyncStateMachineAttribute
} // namespace app::classes::types
