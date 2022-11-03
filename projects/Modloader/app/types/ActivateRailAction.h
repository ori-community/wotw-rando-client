#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivateRailAction {
        namespace {
            inline app::ActivateRailAction__Class* type_info_ref = nullptr;
        }
        inline app::ActivateRailAction__Class** type_info = &type_info_ref;
        inline app::ActivateRailAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateRailAction__Class>(type_info, "", "ActivateRailAction");
        }
        inline app::ActivateRailAction* create() {
            return il2cpp::create_object<app::ActivateRailAction>(get_class());
        }
    } // namespace ActivateRailAction
} // namespace app::classes::types
