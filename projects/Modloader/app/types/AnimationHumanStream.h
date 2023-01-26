#pragma once
#include <Modloader/app/structs/AnimationHumanStream.h>
#include <Modloader/app/structs/AnimationHumanStream__Boxed.h>
#include <Modloader/app/structs/AnimationHumanStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationHumanStream {
        inline app::AnimationHumanStream__Class** type_info() {
            static app::AnimationHumanStream__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationHumanStream__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationHumanStream__Class* get_class() {
            return il2cpp::get_class<app::AnimationHumanStream__Class>(type_info(), "UnityEngine.Experimental.Animations", "AnimationHumanStream");
        }
        inline app::AnimationHumanStream* create() {
            return il2cpp::create_object<app::AnimationHumanStream>(get_class());
        }
        inline app::AnimationHumanStream__Boxed* box(app::AnimationHumanStream value) {
            return il2cpp::box_value<app::AnimationHumanStream__Boxed>(get_class(), value);
        }
    } // namespace AnimationHumanStream
} // namespace app::classes::types
