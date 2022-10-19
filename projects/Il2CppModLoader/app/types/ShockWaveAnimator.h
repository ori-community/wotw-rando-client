#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShockWaveAnimator {
        namespace {
            inline app::ShockWaveAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ShockWaveAnimator__Class** type_info = &type_info_ref;
        inline app::ShockWaveAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShockWaveAnimator__Class>(type_info, "", "ShockWaveAnimator");
        }
        inline app::ShockWaveAnimator* create() {
            return il2cpp::create_object<app::ShockWaveAnimator>(get_class());
        }
    } // namespace ShockWaveAnimator
} // namespace app::classes::types
