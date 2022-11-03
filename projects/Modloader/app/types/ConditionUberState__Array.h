#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConditionUberState__Array {
        namespace {
            inline app::ConditionUberState__Array__Class* type_info_ref = nullptr;
        }
        inline app::ConditionUberState__Array__Class** type_info = &type_info_ref;
        inline app::ConditionUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::ConditionUberState__Array__Class>(type_info, "Moon", "ConditionUberState[]");
        }
        inline app::ConditionUberState__Array* create() {
            return il2cpp::create_object<app::ConditionUberState__Array>(get_class());
        }
    } // namespace ConditionUberState__Array
} // namespace app::classes::types
