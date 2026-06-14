#pragma once
#include <Modloader/app/structs/FirstExecutionOrder.h>
#include <Modloader/app/structs/FirstExecutionOrder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FirstExecutionOrder {
        inline app::FirstExecutionOrder__Class** type_info() {
            static app::FirstExecutionOrder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FirstExecutionOrder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FirstExecutionOrder__Class* get_class() {
            return il2cpp::get_class<app::FirstExecutionOrder__Class>(type_info(), "", "FirstExecutionOrder");
        }
        inline app::FirstExecutionOrder* create() {
            return il2cpp::create_object<app::FirstExecutionOrder>(get_class());
        }
    } // namespace FirstExecutionOrder
} // namespace app::classes::types
