#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivateAction__Class.h>
#include <Modloader/app/structs/ActivateAction.h>

namespace app::classes::types {
    namespace ActivateAction {
        namespace {
            inline app::ActivateAction__Class* type_info_ref = nullptr;
        }
        inline app::ActivateAction__Class** type_info = &type_info_ref;
        inline app::ActivateAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateAction__Class>(type_info, "", "ActivateAction");
        }
        inline app::ActivateAction* create() {
            return il2cpp::create_object<app::ActivateAction>(get_class());
        }
    } // namespace ActivateAction
} // namespace app::classes::types
