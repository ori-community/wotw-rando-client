#pragma once
#include <Modloader/app/structs/LastExecutionOrder.h>
#include <Modloader/app/structs/LastExecutionOrder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LastExecutionOrder {
        inline app::LastExecutionOrder__Class** type_info() {
            static app::LastExecutionOrder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LastExecutionOrder__Class**)(modloader::win::memory::resolve_rva(0x0472EB98));
            }
            return cache;
        }
        inline app::LastExecutionOrder__Class* get_class() {
            return il2cpp::get_class<app::LastExecutionOrder__Class>(type_info(), "", "LastExecutionOrder");
        }
        inline app::LastExecutionOrder* create() {
            return il2cpp::create_object<app::LastExecutionOrder>(get_class());
        }
    } // namespace LastExecutionOrder
} // namespace app::classes::types
