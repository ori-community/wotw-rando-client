#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelableAnimator {
        namespace {
            inline app::CancelableAnimator__Class* type_info_ref = nullptr;
        }
        inline app::CancelableAnimator__Class** type_info = &type_info_ref;
        inline app::CancelableAnimator__Class* get_class() {
            return il2cpp::get_class<app::CancelableAnimator__Class>(type_info, "Moon.Timeline", "CancelableAnimator");
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
