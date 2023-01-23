#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ResetDamageRecieversAction__Class.h>
#include <Modloader/app/structs/ResetDamageRecieversAction.h>

namespace app::classes::types {
    namespace ResetDamageRecieversAction {
        namespace {
            inline app::ResetDamageRecieversAction__Class* type_info_ref = nullptr;
        }
        inline app::ResetDamageRecieversAction__Class** type_info = &type_info_ref;
        inline app::ResetDamageRecieversAction__Class* get_class() {
            return il2cpp::get_class<app::ResetDamageRecieversAction__Class>(type_info, "", "ResetDamageRecieversAction");
        }
        inline app::ResetDamageRecieversAction* create() {
            return il2cpp::create_object<app::ResetDamageRecieversAction>(get_class());
        }
    } // namespace ResetDamageRecieversAction
} // namespace app::classes::types
