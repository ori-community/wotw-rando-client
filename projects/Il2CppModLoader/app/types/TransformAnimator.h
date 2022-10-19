#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformAnimator {
        namespace {
            inline app::TransformAnimator__Class* type_info_ref = nullptr;
        }
        inline app::TransformAnimator__Class** type_info = &type_info_ref;
        inline app::TransformAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransformAnimator__Class>(type_info, "", "TransformAnimator");
        }
        inline app::TransformAnimator* create() {
            return il2cpp::create_object<app::TransformAnimator>(get_class());
        }
    } // namespace TransformAnimator
} // namespace app::classes::types
