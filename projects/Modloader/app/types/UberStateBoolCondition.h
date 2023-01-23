#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateBoolCondition__Class.h>
#include <Modloader/app/structs/UberStateBoolCondition.h>

namespace app::classes::types {
    namespace UberStateBoolCondition {
        namespace {
            inline app::UberStateBoolCondition__Class* type_info_ref = nullptr;
        }
        inline app::UberStateBoolCondition__Class** type_info = &type_info_ref;
        inline app::UberStateBoolCondition__Class* get_class() {
            return il2cpp::get_class<app::UberStateBoolCondition__Class>(type_info, "", "UberStateBoolCondition");
        }
        inline app::UberStateBoolCondition* create() {
            return il2cpp::create_object<app::UberStateBoolCondition>(get_class());
        }
    } // namespace UberStateBoolCondition
} // namespace app::classes::types
