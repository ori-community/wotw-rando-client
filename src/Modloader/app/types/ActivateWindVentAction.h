#pragma once
#include <Modloader/app/structs/ActivateWindVentAction.h>
#include <Modloader/app/structs/ActivateWindVentAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateWindVentAction {
        inline app::ActivateWindVentAction__Class** type_info() {
            static app::ActivateWindVentAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateWindVentAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateWindVentAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateWindVentAction__Class>(type_info(), "", "ActivateWindVentAction");
        }
        inline app::ActivateWindVentAction* create() {
            return il2cpp::create_object<app::ActivateWindVentAction>(get_class());
        }
    } // namespace ActivateWindVentAction
} // namespace app::classes::types
