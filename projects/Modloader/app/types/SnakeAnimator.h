#pragma once
#include <Modloader/app/structs/SnakeAnimator.h>
#include <Modloader/app/structs/SnakeAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnakeAnimator {
        inline app::SnakeAnimator__Class** type_info() {
            static app::SnakeAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnakeAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnakeAnimator__Class* get_class() {
            return il2cpp::get_class<app::SnakeAnimator__Class>(type_info(), "UnityEngine", "SnakeAnimator");
        }
        inline app::SnakeAnimator* create() {
            return il2cpp::create_object<app::SnakeAnimator>(get_class());
        }
    } // namespace SnakeAnimator
} // namespace app::classes::types
