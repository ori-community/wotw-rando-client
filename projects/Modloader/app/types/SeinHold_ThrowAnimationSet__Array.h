#pragma once
#include <Modloader/app/structs/SeinHold_ThrowAnimationSet__Array.h>
#include <Modloader/app/structs/SeinHold_ThrowAnimationSet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHold_ThrowAnimationSet__Array {
        inline app::SeinHold_ThrowAnimationSet__Array__Class** type_info() {
            static app::SeinHold_ThrowAnimationSet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHold_ThrowAnimationSet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHold_ThrowAnimationSet__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinHold_ThrowAnimationSet__Array__Class>(type_info(), "", "SeinHold+ThrowAnimationSet[]");
        }
        inline app::SeinHold_ThrowAnimationSet__Array* create() {
            return il2cpp::create_object<app::SeinHold_ThrowAnimationSet__Array>(get_class());
        }
    } // namespace SeinHold_ThrowAnimationSet__Array
} // namespace app::classes::types
