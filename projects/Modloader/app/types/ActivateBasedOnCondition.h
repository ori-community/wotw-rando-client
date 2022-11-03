#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivateBasedOnCondition {
        namespace {
            inline app::ActivateBasedOnCondition__Class* type_info_ref = nullptr;
        }
        inline app::ActivateBasedOnCondition__Class** type_info = &type_info_ref;
        inline app::ActivateBasedOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ActivateBasedOnCondition__Class>(type_info, "", "ActivateBasedOnCondition");
        }
        inline app::ActivateBasedOnCondition* create() {
            return il2cpp::create_object<app::ActivateBasedOnCondition>(get_class());
        }
    } // namespace ActivateBasedOnCondition
} // namespace app::classes::types
