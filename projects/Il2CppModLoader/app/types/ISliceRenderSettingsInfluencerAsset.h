#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencerAsset {
        inline app::ISliceRenderSettingsInfluencerAsset__Class** type_info = (app::ISliceRenderSettingsInfluencerAsset__Class**)(modloader::win::memory::resolve_rva(0x04705EA8));
        inline app::ISliceRenderSettingsInfluencerAsset__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencerAsset__Class>(type_info, "Moon.Rendering", "ISliceRenderSettingsInfluencerAsset");
        }
    } // namespace ISliceRenderSettingsInfluencerAsset
} // namespace app::classes::types
