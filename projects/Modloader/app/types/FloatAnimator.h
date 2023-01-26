#pragma once
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/FloatAnimator__Array.h>
#include <Modloader/app/structs/FloatAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatAnimator {
        inline app::FloatAnimator__Class** type_info() {
            static app::FloatAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatAnimator__Class* get_class() {
            return il2cpp::get_class<app::FloatAnimator__Class>(type_info(), "Moon.Timeline", "FloatAnimator");
        }
        inline app::FloatAnimator* create() {
            return il2cpp::create_object<app::FloatAnimator>(get_class());
        }
        inline app::FloatAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatAnimator__Array>(get_class(), size);
        }
        inline app::FloatAnimator__Array* create_array(const std::vector<app::FloatAnimator*>& items) {
            return il2cpp::array_new<app::FloatAnimator__Array>(get_class(), items);
        }
    } // namespace FloatAnimator
} // namespace app::classes::types
