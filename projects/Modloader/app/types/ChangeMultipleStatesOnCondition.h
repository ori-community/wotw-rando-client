#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeMultipleStatesOnCondition {
        namespace {
            inline app::ChangeMultipleStatesOnCondition__Class* type_info_ref = nullptr;
        }
        inline app::ChangeMultipleStatesOnCondition__Class** type_info = &type_info_ref;
        inline app::ChangeMultipleStatesOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ChangeMultipleStatesOnCondition__Class>(type_info, "Moon.Setups", "ChangeMultipleStatesOnCondition");
        }
        inline app::ChangeMultipleStatesOnCondition* create() {
            return il2cpp::create_object<app::ChangeMultipleStatesOnCondition>(get_class());
        }
    } // namespace ChangeMultipleStatesOnCondition
} // namespace app::classes::types
