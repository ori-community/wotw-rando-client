#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostEffectsBase {
        namespace {
            app::PostEffectsBase__Class* type_info_ref = nullptr;
        }
        app::PostEffectsBase__Class** type_info = &type_info_ref;
        inline app::PostEffectsBase__Class* get_class() {
            return il2cpp::get_class<app::PostEffectsBase__Class>(type_info, "UnityStandardAssets.ImageEffects", "PostEffectsBase");
        }
        inline app::PostEffectsBase* create() {
            return il2cpp::create_object<app::PostEffectsBase>(get_class());
        }
    } // namespace PostEffectsBase
} // namespace app::classes::types
