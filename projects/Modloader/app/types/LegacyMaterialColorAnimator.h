#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyMaterialColorAnimator__Class.h>
#include <Modloader/app/structs/LegacyMaterialColorAnimator.h>

namespace app::classes::types {
    namespace LegacyMaterialColorAnimator {
        namespace {
            inline app::LegacyMaterialColorAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyMaterialColorAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyMaterialColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialColorAnimator__Class>(type_info, "", "LegacyMaterialColorAnimator");
        }
        inline app::LegacyMaterialColorAnimator* create() {
            return il2cpp::create_object<app::LegacyMaterialColorAnimator>(get_class());
        }
    } // namespace LegacyMaterialColorAnimator
} // namespace app::classes::types
