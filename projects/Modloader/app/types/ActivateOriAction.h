#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivateOriAction__Class.h>
#include <Modloader/app/structs/ActivateOriAction.h>

namespace app::classes::types {
    namespace ActivateOriAction {
        namespace {
            inline app::ActivateOriAction__Class* type_info_ref = nullptr;
        }
        inline app::ActivateOriAction__Class** type_info = &type_info_ref;
        inline app::ActivateOriAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateOriAction__Class>(type_info, "", "ActivateOriAction");
        }
        inline app::ActivateOriAction* create() {
            return il2cpp::create_object<app::ActivateOriAction>(get_class());
        }
    } // namespace ActivateOriAction
} // namespace app::classes::types
