#pragma once
#include <Modloader/app/structs/PlayableAsset.h>
#include <Modloader/app/structs/PlayableAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableAsset {
        inline app::PlayableAsset__Class** type_info() {
            static app::PlayableAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayableAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayableAsset__Class* get_class() {
            return il2cpp::get_class<app::PlayableAsset__Class>(type_info(), "UnityEngine.Playables", "PlayableAsset");
        }
        inline app::PlayableAsset* create() {
            return il2cpp::create_object<app::PlayableAsset>(get_class());
        }
    } // namespace PlayableAsset
} // namespace app::classes::types
