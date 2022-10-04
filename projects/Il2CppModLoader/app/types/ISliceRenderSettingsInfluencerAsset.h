#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencerAsset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISliceRenderSettingsInfluencerAsset__Class** type_info;
        inline app::ISliceRenderSettingsInfluencerAsset__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencerAsset__Class>(type_info, "Moon.Rendering", "ISliceRenderSettingsInfluencerAsset");
        }
        inline app::ISliceRenderSettingsInfluencerAsset* create() {
            return il2cpp::create_object<app::ISliceRenderSettingsInfluencerAsset>(get_class());
        }
    } // namespace ISliceRenderSettingsInfluencerAsset
} // namespace app::classes::types
