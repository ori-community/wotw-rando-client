#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatAnimator {
        namespace {
            app::FloatAnimator__Class* type_info_ref = nullptr;
        }
        app::FloatAnimator__Class** type_info = &type_info_ref;
        inline app::FloatAnimator__Class* get_class() {
            return il2cpp::get_class<app::FloatAnimator__Class>(type_info, "Moon.Timeline", "FloatAnimator");
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
