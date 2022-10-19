#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DepthOfFieldAnimator {
        namespace {
            inline app::DepthOfFieldAnimator__Class* type_info_ref = nullptr;
        }
        inline app::DepthOfFieldAnimator__Class** type_info = &type_info_ref;
        inline app::DepthOfFieldAnimator__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldAnimator__Class>(type_info, "", "DepthOfFieldAnimator");
        }
        inline app::DepthOfFieldAnimator* create() {
            return il2cpp::create_object<app::DepthOfFieldAnimator>(get_class());
        }
    } // namespace DepthOfFieldAnimator
} // namespace app::classes::types
