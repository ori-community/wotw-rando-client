#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VFXExpressionValues {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VFXExpressionValues__Class** type_info;
        inline app::VFXExpressionValues__Class* get_class() {
            return il2cpp::get_class<app::VFXExpressionValues__Class>(type_info, "UnityEngine.Experimental.VFX", "VFXExpressionValues");
        }
        inline app::VFXExpressionValues* create() {
            return il2cpp::create_object<app::VFXExpressionValues>(get_class());
        }
    } // namespace VFXExpressionValues
} // namespace app::classes::types
