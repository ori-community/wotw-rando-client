#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationAnimationModifier {
        namespace {
            inline app::RotationAnimationModifier__Class* type_info_ref = nullptr;
        }
        inline app::RotationAnimationModifier__Class** type_info = &type_info_ref;
        inline app::RotationAnimationModifier__Class* get_class() {
            return il2cpp::get_class<app::RotationAnimationModifier__Class>(type_info, "", "RotationAnimationModifier");
        }
        inline app::RotationAnimationModifier* create() {
            return il2cpp::create_object<app::RotationAnimationModifier>(get_class());
        }
    } // namespace RotationAnimationModifier
} // namespace app::classes::types
