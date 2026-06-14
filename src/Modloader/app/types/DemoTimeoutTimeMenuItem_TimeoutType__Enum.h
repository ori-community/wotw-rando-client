#pragma once
#include <Modloader/app/structs/DemoTimeoutTimeMenuItem_TimeoutType__Enum.h>
#include <Modloader/app/structs/DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DemoTimeoutTimeMenuItem_TimeoutType__Enum {
        inline app::DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class** type_info() {
            static app::DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class>(type_info(), "", "DemoTimeoutTimeMenuItem", "TimeoutType");
        }
        inline app::DemoTimeoutTimeMenuItem_TimeoutType__Enum* create() {
            return il2cpp::create_object<app::DemoTimeoutTimeMenuItem_TimeoutType__Enum>(get_class());
        }
    } // namespace DemoTimeoutTimeMenuItem_TimeoutType__Enum
} // namespace app::classes::types
