#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationStateModifierData {
        namespace {
            app::RotationStateModifierData__Class* type_info_ref = nullptr;
        }
        app::RotationStateModifierData__Class** type_info = &type_info_ref;
        inline app::RotationStateModifierData__Class* get_class() {
            return il2cpp::get_class<app::RotationStateModifierData__Class>(type_info, "", "RotationStateModifierData");
        }
        inline app::RotationStateModifierData* create() {
            return il2cpp::create_object<app::RotationStateModifierData>(get_class());
        }
    } // namespace RotationStateModifierData
} // namespace app::classes::types
