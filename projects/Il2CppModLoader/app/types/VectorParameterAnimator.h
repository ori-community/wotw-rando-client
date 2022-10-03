#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VectorParameterAnimator {
        namespace {
            app::VectorParameterAnimator__Class* type_info_ref = nullptr;
        }
        app::VectorParameterAnimator__Class** type_info = &type_info_ref;
        inline app::VectorParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::VectorParameterAnimator__Class>(type_info, "", "VectorParameterAnimator");
        }
        inline app::VectorParameterAnimator* create() {
            return il2cpp::create_object<app::VectorParameterAnimator>(get_class());
        }
    } // namespace VectorParameterAnimator
} // namespace app::classes::types
