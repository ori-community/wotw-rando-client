#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowInventoryAction {
        namespace {
            inline app::ShowInventoryAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowInventoryAction__Class** type_info = &type_info_ref;
        inline app::ShowInventoryAction__Class* get_class() {
            return il2cpp::get_class<app::ShowInventoryAction__Class>(type_info, "", "ShowInventoryAction");
        }
        inline app::ShowInventoryAction* create() {
            return il2cpp::create_object<app::ShowInventoryAction>(get_class());
        }
    } // namespace ShowInventoryAction
} // namespace app::classes::types
