#pragma once
#include <Modloader/app/structs/IKExecutionOrder.h>
#include <Modloader/app/structs/IKExecutionOrder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKExecutionOrder {
        inline app::IKExecutionOrder__Class** type_info() {
            static app::IKExecutionOrder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKExecutionOrder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKExecutionOrder__Class* get_class() {
            return il2cpp::get_class<app::IKExecutionOrder__Class>(type_info(), "RootMotion.FinalIK", "IKExecutionOrder");
        }
        inline app::IKExecutionOrder* create() {
            return il2cpp::create_object<app::IKExecutionOrder>(get_class());
        }
    } // namespace IKExecutionOrder
} // namespace app::classes::types
