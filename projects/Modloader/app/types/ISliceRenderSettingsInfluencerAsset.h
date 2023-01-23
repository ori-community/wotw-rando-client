#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISliceRenderSettingsInfluencerAsset__Class.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencerAsset {
        inline app::ISliceRenderSettingsInfluencerAsset__Class** type_info = (app::ISliceRenderSettingsInfluencerAsset__Class**)(modloader::win::memory::resolve_rva(0x04705EA8));
        inline app::ISliceRenderSettingsInfluencerAsset__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencerAsset__Class>(type_info, "Moon.Rendering", "ISliceRenderSettingsInfluencerAsset");
        }
    } // namespace ISliceRenderSettingsInfluencerAsset
} // namespace app::classes::types
