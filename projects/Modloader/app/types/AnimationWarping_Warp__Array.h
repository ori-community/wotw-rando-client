#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationWarping_Warp__Array__Class.h>
#include <Modloader/app/structs/AnimationWarping_Warp__Array.h>

namespace app::classes::types {
    namespace AnimationWarping_Warp__Array {
        namespace {
            inline app::AnimationWarping_Warp__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationWarping_Warp__Array__Class** type_info = &type_info_ref;
        inline app::AnimationWarping_Warp__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationWarping_Warp__Array__Class>(type_info, "RootMotion.Demos", "AnimationWarping+Warp[]");
        }
        inline app::AnimationWarping_Warp__Array* create() {
            return il2cpp::create_object<app::AnimationWarping_Warp__Array>(get_class());
        }
    } // namespace AnimationWarping_Warp__Array
} // namespace app::classes::types
