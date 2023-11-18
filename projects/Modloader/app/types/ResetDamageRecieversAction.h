#pragma once
#include <Modloader/app/structs/ResetDamageRecieversAction.h>
#include <Modloader/app/structs/ResetDamageRecieversAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResetDamageRecieversAction {
        inline app::ResetDamageRecieversAction__Class** type_info() {
            static app::ResetDamageRecieversAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResetDamageRecieversAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResetDamageRecieversAction__Class* get_class() {
            return il2cpp::get_class<app::ResetDamageRecieversAction__Class>(type_info(), "", "ResetDamageRecieversAction");
        }
        inline app::ResetDamageRecieversAction* create() {
            return il2cpp::create_object<app::ResetDamageRecieversAction>(get_class());
        }
    } // namespace ResetDamageRecieversAction
} // namespace app::classes::types
