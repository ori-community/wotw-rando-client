#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsWarmingShadersCondition__Class.h>
#include <Modloader/app/structs/IsWarmingShadersCondition.h>

namespace app::classes::types {
    namespace IsWarmingShadersCondition {
        namespace {
            inline app::IsWarmingShadersCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsWarmingShadersCondition__Class** type_info = &type_info_ref;
        inline app::IsWarmingShadersCondition__Class* get_class() {
            return il2cpp::get_class<app::IsWarmingShadersCondition__Class>(type_info, "", "IsWarmingShadersCondition");
        }
        inline app::IsWarmingShadersCondition* create() {
            return il2cpp::create_object<app::IsWarmingShadersCondition>(get_class());
        }
    } // namespace IsWarmingShadersCondition
} // namespace app::classes::types
