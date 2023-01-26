#pragma once
#include <Modloader/app/structs/AnimationWarping_Warp__Array.h>
#include <Modloader/app/structs/AnimationWarping_Warp__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationWarping_Warp__Array {
        inline app::AnimationWarping_Warp__Array__Class** type_info() {
            static app::AnimationWarping_Warp__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationWarping_Warp__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationWarping_Warp__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationWarping_Warp__Array__Class>(type_info(), "RootMotion.Demos", "AnimationWarping+Warp[]");
        }
        inline app::AnimationWarping_Warp__Array* create() {
            return il2cpp::create_object<app::AnimationWarping_Warp__Array>(get_class());
        }
    } // namespace AnimationWarping_Warp__Array
} // namespace app::classes::types
