#pragma once
#include <Modloader/app/structs/Toad_AnimationEventAction__Array.h>
#include <Modloader/app/structs/Toad_AnimationEventAction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Toad_AnimationEventAction__Array {
        inline app::Toad_AnimationEventAction__Array__Class** type_info() {
            static app::Toad_AnimationEventAction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Toad_AnimationEventAction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Toad_AnimationEventAction__Array__Class* get_class() {
            return il2cpp::get_class<app::Toad_AnimationEventAction__Array__Class>(type_info(), "", "Toad+AnimationEventAction[]");
        }
        inline app::Toad_AnimationEventAction__Array* create() {
            return il2cpp::create_object<app::Toad_AnimationEventAction__Array>(get_class());
        }
    } // namespace Toad_AnimationEventAction__Array
} // namespace app::classes::types
