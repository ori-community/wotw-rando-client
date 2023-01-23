#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DealDamageAction__Class.h>
#include <Modloader/app/structs/DealDamageAction.h>

namespace app::classes::types {
    namespace DealDamageAction {
        namespace {
            inline app::DealDamageAction__Class* type_info_ref = nullptr;
        }
        inline app::DealDamageAction__Class** type_info = &type_info_ref;
        inline app::DealDamageAction__Class* get_class() {
            return il2cpp::get_class<app::DealDamageAction__Class>(type_info, "", "DealDamageAction");
        }
        inline app::DealDamageAction* create() {
            return il2cpp::create_object<app::DealDamageAction>(get_class());
        }
    } // namespace DealDamageAction
} // namespace app::classes::types
