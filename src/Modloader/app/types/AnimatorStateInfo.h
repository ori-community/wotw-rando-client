#pragma once
#include <Modloader/app/structs/AnimatorStateInfo.h>
#include <Modloader/app/structs/AnimatorStateInfo__Boxed.h>
#include <Modloader/app/structs/AnimatorStateInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorStateInfo {
        inline app::AnimatorStateInfo__Class** type_info() {
            static app::AnimatorStateInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorStateInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorStateInfo__Class* get_class() {
            return il2cpp::get_class<app::AnimatorStateInfo__Class>(type_info(), "UnityEngine", "AnimatorStateInfo");
        }
        inline app::AnimatorStateInfo* create() {
            return il2cpp::create_object<app::AnimatorStateInfo>(get_class());
        }
        inline app::AnimatorStateInfo__Boxed* box(app::AnimatorStateInfo value) {
            return il2cpp::box_value<app::AnimatorStateInfo__Boxed>(get_class(), value);
        }
    } // namespace AnimatorStateInfo
} // namespace app::classes::types
