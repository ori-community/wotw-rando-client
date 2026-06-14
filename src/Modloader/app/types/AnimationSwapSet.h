#pragma once
#include <Modloader/app/structs/AnimationSwapSet.h>
#include <Modloader/app/structs/AnimationSwapSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationSwapSet {
        inline app::AnimationSwapSet__Class** type_info() {
            static app::AnimationSwapSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationSwapSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationSwapSet__Class* get_class() {
            return il2cpp::get_class<app::AnimationSwapSet__Class>(type_info(), "", "AnimationSwapSet");
        }
        inline app::AnimationSwapSet* create() {
            return il2cpp::create_object<app::AnimationSwapSet>(get_class());
        }
    } // namespace AnimationSwapSet
} // namespace app::classes::types
