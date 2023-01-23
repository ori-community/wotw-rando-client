#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConditionUberState_ConditionsCheckMode__Enum__Class.h>
#include <Modloader/app/structs/ConditionUberState_ConditionsCheckMode__Enum.h>

namespace app::classes::types {
    namespace ConditionUberState_ConditionsCheckMode__Enum {
        namespace {
            inline app::ConditionUberState_ConditionsCheckMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ConditionUberState_ConditionsCheckMode__Enum__Class** type_info = &type_info_ref;
        inline app::ConditionUberState_ConditionsCheckMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ConditionUberState_ConditionsCheckMode__Enum__Class>(type_info, "Moon", "ConditionUberState", "ConditionsCheckMode");
        }
        inline app::ConditionUberState_ConditionsCheckMode__Enum* create() {
            return il2cpp::create_object<app::ConditionUberState_ConditionsCheckMode__Enum>(get_class());
        }
    } // namespace ConditionUberState_ConditionsCheckMode__Enum
} // namespace app::classes::types
