#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayableAsset {
        namespace {
            app::PlayableAsset__Class* type_info_ref = nullptr;
        }
        app::PlayableAsset__Class** type_info = &type_info_ref;
        inline app::PlayableAsset__Class* get_class() {
            return il2cpp::get_class<app::PlayableAsset__Class>(type_info, "UnityEngine.Playables", "PlayableAsset");
        }
        inline app::PlayableAsset* create() {
            return il2cpp::create_object<app::PlayableAsset>(get_class());
        }
    } // namespace PlayableAsset
} // namespace app::classes::types
