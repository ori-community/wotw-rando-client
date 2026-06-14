#pragma once
#include <Modloader/app/structs/AnimationWarping_Warp.h>
#include <Modloader/app/structs/AnimationWarping_Warp__Array.h>
#include <Modloader/app/structs/AnimationWarping_Warp__Boxed.h>
#include <Modloader/app/structs/AnimationWarping_Warp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationWarping_Warp {
        inline app::AnimationWarping_Warp__Class** type_info() {
            static app::AnimationWarping_Warp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationWarping_Warp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationWarping_Warp__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationWarping_Warp__Class>(type_info(), "RootMotion.Demos", "AnimationWarping", "Warp");
        }
        inline app::AnimationWarping_Warp* create() {
            return il2cpp::create_object<app::AnimationWarping_Warp>(get_class());
        }
        inline app::AnimationWarping_Warp__Boxed* box(app::AnimationWarping_Warp value) {
            return il2cpp::box_value<app::AnimationWarping_Warp__Boxed>(get_class(), value);
        }
        inline app::AnimationWarping_Warp__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationWarping_Warp__Array>(get_class(), size);
        }
        inline app::AnimationWarping_Warp__Array* create_array(const std::vector<app::AnimationWarping_Warp>& items) {
            return il2cpp::array_new<app::AnimationWarping_Warp__Array>(get_class(), items);
        }
    } // namespace AnimationWarping_Warp
} // namespace app::classes::types
