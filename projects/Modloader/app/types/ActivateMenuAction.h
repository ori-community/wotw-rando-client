#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivateMenuAction__Class.h>
#include <Modloader/app/structs/ActivateMenuAction.h>

namespace app::classes::types {
    namespace ActivateMenuAction {
        namespace {
            inline app::ActivateMenuAction__Class* type_info_ref = nullptr;
        }
        inline app::ActivateMenuAction__Class** type_info = &type_info_ref;
        inline app::ActivateMenuAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateMenuAction__Class>(type_info, "", "ActivateMenuAction");
        }
        inline app::ActivateMenuAction* create() {
            return il2cpp::create_object<app::ActivateMenuAction>(get_class());
        }
    } // namespace ActivateMenuAction
} // namespace app::classes::types
