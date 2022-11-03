#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationStateModifierData {
        namespace {
            inline app::RotationStateModifierData__Class* type_info_ref = nullptr;
        }
        inline app::RotationStateModifierData__Class** type_info = &type_info_ref;
        inline app::RotationStateModifierData__Class* get_class() {
            return il2cpp::get_class<app::RotationStateModifierData__Class>(type_info, "", "RotationStateModifierData");
        }
        inline app::RotationStateModifierData* create() {
            return il2cpp::create_object<app::RotationStateModifierData>(get_class());
        }
    } // namespace RotationStateModifierData
} // namespace app::classes::types
