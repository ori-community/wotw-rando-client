#pragma once
#include <Modloader/app/structs/AnimationListSwap.h>
#include <Modloader/app/structs/AnimationListSwap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationListSwap {
        inline app::AnimationListSwap__Class** type_info() {
            static app::AnimationListSwap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationListSwap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationListSwap__Class* get_class() {
            return il2cpp::get_class<app::AnimationListSwap__Class>(type_info(), "", "AnimationListSwap");
        }
        inline app::AnimationListSwap* create() {
            return il2cpp::create_object<app::AnimationListSwap>(get_class());
        }
    } // namespace AnimationListSwap
} // namespace app::classes::types
