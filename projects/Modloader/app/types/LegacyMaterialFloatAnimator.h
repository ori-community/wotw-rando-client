#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyMaterialFloatAnimator {
        namespace {
            inline app::LegacyMaterialFloatAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyMaterialFloatAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyMaterialFloatAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialFloatAnimator__Class>(type_info, "", "LegacyMaterialFloatAnimator");
        }
        inline app::LegacyMaterialFloatAnimator* create() {
            return il2cpp::create_object<app::LegacyMaterialFloatAnimator>(get_class());
        }
    } // namespace LegacyMaterialFloatAnimator
} // namespace app::classes::types
