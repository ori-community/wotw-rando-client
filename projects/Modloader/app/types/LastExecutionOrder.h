#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LastExecutionOrder {
        inline app::LastExecutionOrder__Class** type_info = (app::LastExecutionOrder__Class**)(modloader::win::memory::resolve_rva(0x0472EB98));
        inline app::LastExecutionOrder__Class* get_class() {
            return il2cpp::get_class<app::LastExecutionOrder__Class>(type_info, "", "LastExecutionOrder");
        }
        inline app::LastExecutionOrder* create() {
            return il2cpp::create_object<app::LastExecutionOrder>(get_class());
        }
    } // namespace LastExecutionOrder
} // namespace app::classes::types
