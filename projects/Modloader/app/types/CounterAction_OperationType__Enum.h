#pragma once
#include <Modloader/app/structs/CounterAction_OperationType__Enum.h>
#include <Modloader/app/structs/CounterAction_OperationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CounterAction_OperationType__Enum {
        inline app::CounterAction_OperationType__Enum__Class** type_info() {
            static app::CounterAction_OperationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CounterAction_OperationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CounterAction_OperationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CounterAction_OperationType__Enum__Class>(type_info(), "", "CounterAction", "OperationType");
        }
        inline app::CounterAction_OperationType__Enum* create() {
            return il2cpp::create_object<app::CounterAction_OperationType__Enum>(get_class());
        }
    } // namespace CounterAction_OperationType__Enum
} // namespace app::classes::types
