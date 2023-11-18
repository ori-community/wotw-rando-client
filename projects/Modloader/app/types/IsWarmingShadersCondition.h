#pragma once
#include <Modloader/app/structs/IsWarmingShadersCondition.h>
#include <Modloader/app/structs/IsWarmingShadersCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsWarmingShadersCondition {
        inline app::IsWarmingShadersCondition__Class** type_info() {
            static app::IsWarmingShadersCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsWarmingShadersCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsWarmingShadersCondition__Class* get_class() {
            return il2cpp::get_class<app::IsWarmingShadersCondition__Class>(type_info(), "", "IsWarmingShadersCondition");
        }
        inline app::IsWarmingShadersCondition* create() {
            return il2cpp::create_object<app::IsWarmingShadersCondition>(get_class());
        }
    } // namespace IsWarmingShadersCondition
} // namespace app::classes::types
