#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsShardEquippedCondition__Class.h>
#include <Modloader/app/structs/IsShardEquippedCondition.h>

namespace app::classes::types {
    namespace IsShardEquippedCondition {
        namespace {
            inline app::IsShardEquippedCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsShardEquippedCondition__Class** type_info = &type_info_ref;
        inline app::IsShardEquippedCondition__Class* get_class() {
            return il2cpp::get_class<app::IsShardEquippedCondition__Class>(type_info, "", "IsShardEquippedCondition");
        }
        inline app::IsShardEquippedCondition* create() {
            return il2cpp::create_object<app::IsShardEquippedCondition>(get_class());
        }
    } // namespace IsShardEquippedCondition
} // namespace app::classes::types
