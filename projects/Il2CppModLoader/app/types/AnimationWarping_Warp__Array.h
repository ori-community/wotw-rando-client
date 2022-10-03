#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationWarping_Warp__Array {
        namespace {
            app::AnimationWarping_Warp__Array__Class* type_info_ref = nullptr;
        }
        app::AnimationWarping_Warp__Array__Class** type_info = &type_info_ref;
        inline app::AnimationWarping_Warp__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationWarping_Warp__Array__Class>(type_info, "RootMotion.Demos", "AnimationWarping+Warp[]");
        }
        inline app::AnimationWarping_Warp__Array* create() {
            return il2cpp::create_object<app::AnimationWarping_Warp__Array>(get_class());
        }
    } // namespace AnimationWarping_Warp__Array
} // namespace app::classes::types
