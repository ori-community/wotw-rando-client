#pragma once
#include <Modloader/app/structs/AnimationSwap.h>
#include <Modloader/app/structs/AnimationSwap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationSwap {
        inline app::AnimationSwap__Class** type_info() {
            static app::AnimationSwap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationSwap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationSwap__Class* get_class() {
            return il2cpp::get_class<app::AnimationSwap__Class>(type_info(), "", "AnimationSwap");
        }
        inline app::AnimationSwap* create() {
            return il2cpp::create_object<app::AnimationSwap>(get_class());
        }
    } // namespace AnimationSwap
} // namespace app::classes::types
