#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageReceiverCondition__Class.h>
#include <Modloader/app/structs/DamageReceiverCondition.h>

namespace app::classes::types {
    namespace DamageReceiverCondition {
        namespace {
            inline app::DamageReceiverCondition__Class* type_info_ref = nullptr;
        }
        inline app::DamageReceiverCondition__Class** type_info = &type_info_ref;
        inline app::DamageReceiverCondition__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiverCondition__Class>(type_info, "", "DamageReceiverCondition");
        }
        inline app::DamageReceiverCondition* create() {
            return il2cpp::create_object<app::DamageReceiverCondition>(get_class());
        }
    } // namespace DamageReceiverCondition
} // namespace app::classes::types
