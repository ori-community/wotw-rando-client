#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HasKeystonesCondition__Class.h>
#include <Modloader/app/structs/HasKeystonesCondition.h>

namespace app::classes::types {
    namespace HasKeystonesCondition {
        namespace {
            inline app::HasKeystonesCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasKeystonesCondition__Class** type_info = &type_info_ref;
        inline app::HasKeystonesCondition__Class* get_class() {
            return il2cpp::get_class<app::HasKeystonesCondition__Class>(type_info, "", "HasKeystonesCondition");
        }
        inline app::HasKeystonesCondition* create() {
            return il2cpp::create_object<app::HasKeystonesCondition>(get_class());
        }
    } // namespace HasKeystonesCondition
} // namespace app::classes::types
