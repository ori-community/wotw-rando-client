#pragma once
#include <Modloader/app/structs/RotationStateModifierData.h>
#include <Modloader/app/structs/RotationStateModifierData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationStateModifierData {
        inline app::RotationStateModifierData__Class** type_info() {
            static app::RotationStateModifierData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationStateModifierData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationStateModifierData__Class* get_class() {
            return il2cpp::get_class<app::RotationStateModifierData__Class>(type_info(), "", "RotationStateModifierData");
        }
        inline app::RotationStateModifierData* create() {
            return il2cpp::create_object<app::RotationStateModifierData>(get_class());
        }
    } // namespace RotationStateModifierData
} // namespace app::classes::types
