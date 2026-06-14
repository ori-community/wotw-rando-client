#pragma once
#include <Modloader/app/structs/GetWorldEventCondition.h>
#include <Modloader/app/structs/GetWorldEventCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetWorldEventCondition {
        inline app::GetWorldEventCondition__Class** type_info() {
            static app::GetWorldEventCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetWorldEventCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetWorldEventCondition__Class* get_class() {
            return il2cpp::get_class<app::GetWorldEventCondition__Class>(type_info(), "", "GetWorldEventCondition");
        }
        inline app::GetWorldEventCondition* create() {
            return il2cpp::create_object<app::GetWorldEventCondition>(get_class());
        }
    } // namespace GetWorldEventCondition
} // namespace app::classes::types
