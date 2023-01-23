#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyFloatShaderPropertyAnimator__Class.h>
#include <Modloader/app/structs/LegacyFloatShaderPropertyAnimator.h>

namespace app::classes::types {
    namespace LegacyFloatShaderPropertyAnimator {
        namespace {
            inline app::LegacyFloatShaderPropertyAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyFloatShaderPropertyAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyFloatShaderPropertyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyFloatShaderPropertyAnimator__Class>(type_info, "", "LegacyFloatShaderPropertyAnimator");
        }
        inline app::LegacyFloatShaderPropertyAnimator* create() {
            return il2cpp::create_object<app::LegacyFloatShaderPropertyAnimator>(get_class());
        }
    } // namespace LegacyFloatShaderPropertyAnimator
} // namespace app::classes::types
