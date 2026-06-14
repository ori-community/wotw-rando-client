#pragma once
#include <Modloader/app/structs/IsSafeToExitCondition.h>
#include <Modloader/app/structs/IsSafeToExitCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsSafeToExitCondition {
        inline app::IsSafeToExitCondition__Class** type_info() {
            static app::IsSafeToExitCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsSafeToExitCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsSafeToExitCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSafeToExitCondition__Class>(type_info(), "", "IsSafeToExitCondition");
        }
        inline app::IsSafeToExitCondition* create() {
            return il2cpp::create_object<app::IsSafeToExitCondition>(get_class());
        }
    } // namespace IsSafeToExitCondition
} // namespace app::classes::types
