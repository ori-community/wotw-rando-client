#pragma once
#include <Modloader/app/structs/PostEffectsBase.h>
#include <Modloader/app/structs/PostEffectsBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostEffectsBase {
        inline app::PostEffectsBase__Class** type_info() {
            static app::PostEffectsBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostEffectsBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostEffectsBase__Class* get_class() {
            return il2cpp::get_class<app::PostEffectsBase__Class>(type_info(), "UnityStandardAssets.ImageEffects", "PostEffectsBase");
        }
        inline app::PostEffectsBase* create() {
            return il2cpp::create_object<app::PostEffectsBase>(get_class());
        }
    } // namespace PostEffectsBase
} // namespace app::classes::types
