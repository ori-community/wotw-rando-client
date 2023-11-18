#pragma once
#include <Modloader/app/structs/AnimatorClipInfo__Array.h>
#include <Modloader/app/structs/AnimatorClipInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorClipInfo__Array {
        inline app::AnimatorClipInfo__Array__Class** type_info() {
            static app::AnimatorClipInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorClipInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorClipInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimatorClipInfo__Array__Class>(type_info(), "UnityEngine", "AnimatorClipInfo[]");
        }
        inline app::AnimatorClipInfo__Array* create() {
            return il2cpp::create_object<app::AnimatorClipInfo__Array>(get_class());
        }
    } // namespace AnimatorClipInfo__Array
} // namespace app::classes::types
