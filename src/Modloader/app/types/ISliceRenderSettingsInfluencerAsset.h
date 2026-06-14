#pragma once
#include <Modloader/app/structs/ISliceRenderSettingsInfluencerAsset.h>
#include <Modloader/app/structs/ISliceRenderSettingsInfluencerAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencerAsset {
        inline app::ISliceRenderSettingsInfluencerAsset__Class** type_info() {
            static app::ISliceRenderSettingsInfluencerAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISliceRenderSettingsInfluencerAsset__Class**)(modloader::win::memory::resolve_rva(0x04705EA8));
            }
            return cache;
        }
        inline app::ISliceRenderSettingsInfluencerAsset__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencerAsset__Class>(type_info(), "Moon.Rendering", "ISliceRenderSettingsInfluencerAsset");
        }
    } // namespace ISliceRenderSettingsInfluencerAsset
} // namespace app::classes::types
