#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivateWindVentAction {
        namespace {
            inline app::ActivateWindVentAction__Class* type_info_ref = nullptr;
        }
        inline app::ActivateWindVentAction__Class** type_info = &type_info_ref;
        inline app::ActivateWindVentAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateWindVentAction__Class>(type_info, "", "ActivateWindVentAction");
        }
        inline app::ActivateWindVentAction* create() {
            return il2cpp::create_object<app::ActivateWindVentAction>(get_class());
        }
    } // namespace ActivateWindVentAction
} // namespace app::classes::types
