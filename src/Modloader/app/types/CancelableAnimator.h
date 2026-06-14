#pragma once
#include <Modloader/app/structs/CancelableAnimator.h>
#include <Modloader/app/structs/CancelableAnimator__Array.h>
#include <Modloader/app/structs/CancelableAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelableAnimator {
        inline app::CancelableAnimator__Class** type_info() {
            static app::CancelableAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CancelableAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CancelableAnimator__Class* get_class() {
            return il2cpp::get_class<app::CancelableAnimator__Class>(type_info(), "Moon.Timeline", "CancelableAnimator");
        }
        inline app::CancelableAnimator* create() {
            return il2cpp::create_object<app::CancelableAnimator>(get_class());
        }
        inline app::CancelableAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::CancelableAnimator__Array>(get_class(), size);
        }
        inline app::CancelableAnimator__Array* create_array(const std::vector<app::CancelableAnimator*>& items) {
            return il2cpp::array_new<app::CancelableAnimator__Array>(get_class(), items);
        }
    } // namespace CancelableAnimator
} // namespace app::classes::types
