#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FirstExecutionOrder {
        namespace {
            inline app::FirstExecutionOrder__Class* type_info_ref = nullptr;
        }
        inline app::FirstExecutionOrder__Class** type_info = &type_info_ref;
        inline app::FirstExecutionOrder__Class* get_class() {
            return il2cpp::get_class<app::FirstExecutionOrder__Class>(type_info, "", "FirstExecutionOrder");
        }
        inline app::FirstExecutionOrder* create() {
            return il2cpp::create_object<app::FirstExecutionOrder>(get_class());
        }
    } // namespace FirstExecutionOrder
} // namespace app::classes::types
