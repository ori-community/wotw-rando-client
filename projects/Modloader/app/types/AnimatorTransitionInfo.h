#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimatorTransitionInfo__Class.h>
#include <Modloader/app/structs/AnimatorTransitionInfo.h>
#include <Modloader/app/structs/AnimatorTransitionInfo__Boxed.h>

namespace app::classes::types {
    namespace AnimatorTransitionInfo {
        namespace {
            inline app::AnimatorTransitionInfo__Class* type_info_ref = nullptr;
        }
        inline app::AnimatorTransitionInfo__Class** type_info = &type_info_ref;
        inline app::AnimatorTransitionInfo__Class* get_class() {
            return il2cpp::get_class<app::AnimatorTransitionInfo__Class>(type_info, "UnityEngine", "AnimatorTransitionInfo");
        }
        inline app::AnimatorTransitionInfo* create() {
            return il2cpp::create_object<app::AnimatorTransitionInfo>(get_class());
        }
        inline app::AnimatorTransitionInfo__Boxed* box(app::AnimatorTransitionInfo value) {
            return il2cpp::box_value<app::AnimatorTransitionInfo__Boxed>(get_class(), value);
        }
    } // namespace AnimatorTransitionInfo
} // namespace app::classes::types
