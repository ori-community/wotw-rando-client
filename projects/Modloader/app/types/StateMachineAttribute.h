#pragma once
#include <Modloader/app/structs/StateMachineAttribute.h>
#include <Modloader/app/structs/StateMachineAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachineAttribute {
        inline app::StateMachineAttribute__Class** type_info() {
            static app::StateMachineAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateMachineAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateMachineAttribute__Class* get_class() {
            return il2cpp::get_class<app::StateMachineAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "StateMachineAttribute");
        }
        inline app::StateMachineAttribute* create() {
            return il2cpp::create_object<app::StateMachineAttribute>(get_class());
        }
    } // namespace StateMachineAttribute
} // namespace app::classes::types
