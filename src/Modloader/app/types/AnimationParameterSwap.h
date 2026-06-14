#pragma once
#include <Modloader/app/structs/AnimationParameterSwap.h>
#include <Modloader/app/structs/AnimationParameterSwap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationParameterSwap {
        inline app::AnimationParameterSwap__Class** type_info() {
            static app::AnimationParameterSwap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationParameterSwap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationParameterSwap__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameterSwap__Class>(type_info(), "", "AnimationParameterSwap");
        }
        inline app::AnimationParameterSwap* create() {
            return il2cpp::create_object<app::AnimationParameterSwap>(get_class());
        }
    } // namespace AnimationParameterSwap
} // namespace app::classes::types
