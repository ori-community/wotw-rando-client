#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScaleAnimator {
        namespace {
            inline app::ScaleAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ScaleAnimator__Class** type_info = &type_info_ref;
        inline app::ScaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScaleAnimator__Class>(type_info, "", "ScaleAnimator");
        }
        inline app::ScaleAnimator* create() {
            return il2cpp::create_object<app::ScaleAnimator>(get_class());
        }
    } // namespace ScaleAnimator
} // namespace app::classes::types
