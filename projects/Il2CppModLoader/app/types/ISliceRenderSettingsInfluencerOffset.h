#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencerOffset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISliceRenderSettingsInfluencerOffset__Class** type_info;
        inline app::ISliceRenderSettingsInfluencerOffset__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencerOffset__Class>(type_info, "Moon.Rendering", "ISliceRenderSettingsInfluencerOffset");
        }
        inline app::ISliceRenderSettingsInfluencerOffset* create() {
            return il2cpp::create_object<app::ISliceRenderSettingsInfluencerOffset>(get_class());
        }
    } // namespace ISliceRenderSettingsInfluencerOffset
} // namespace app::classes::types
