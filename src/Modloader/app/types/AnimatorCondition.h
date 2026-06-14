#pragma once
#include <Modloader/app/structs/AnimatorCondition.h>
#include <Modloader/app/structs/AnimatorCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorCondition {
        inline app::AnimatorCondition__Class** type_info() {
            static app::AnimatorCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorCondition__Class* get_class() {
            return il2cpp::get_class<app::AnimatorCondition__Class>(type_info(), "", "AnimatorCondition");
        }
        inline app::AnimatorCondition* create() {
            return il2cpp::create_object<app::AnimatorCondition>(get_class());
        }
    } // namespace AnimatorCondition
} // namespace app::classes::types
