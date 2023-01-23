#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationStream__Class.h>
#include <Modloader/app/structs/AnimationStream.h>
#include <Modloader/app/structs/AnimationStream__Boxed.h>

namespace app::classes::types {
    namespace AnimationStream {
        namespace {
            inline app::AnimationStream__Class* type_info_ref = nullptr;
        }
        inline app::AnimationStream__Class** type_info = &type_info_ref;
        inline app::AnimationStream__Class* get_class() {
            return il2cpp::get_class<app::AnimationStream__Class>(type_info, "UnityEngine.Experimental.Animations", "AnimationStream");
        }
        inline app::AnimationStream* create() {
            return il2cpp::create_object<app::AnimationStream>(get_class());
        }
        inline app::AnimationStream__Boxed* box(app::AnimationStream value) {
            return il2cpp::box_value<app::AnimationStream__Boxed>(get_class(), value);
        }
    } // namespace AnimationStream
} // namespace app::classes::types
