#pragma once
#include <Modloader/app/structs/DefaultExecutionOrder.h>
#include <Modloader/app/structs/DefaultExecutionOrder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultExecutionOrder {
        inline app::DefaultExecutionOrder__Class** type_info() {
            static app::DefaultExecutionOrder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultExecutionOrder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultExecutionOrder__Class* get_class() {
            return il2cpp::get_class<app::DefaultExecutionOrder__Class>(type_info(), "UnityEngine", "DefaultExecutionOrder");
        }
        inline app::DefaultExecutionOrder* create() {
            return il2cpp::create_object<app::DefaultExecutionOrder>(get_class());
        }
    } // namespace DefaultExecutionOrder
} // namespace app::classes::types
