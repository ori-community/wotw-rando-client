#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencerOffset {
        inline app::ISliceRenderSettingsInfluencerOffset__Class** type_info = (app::ISliceRenderSettingsInfluencerOffset__Class**)(modloader::win::memory::resolve_rva(0x0471FDD8));
        inline app::ISliceRenderSettingsInfluencerOffset__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencerOffset__Class>(type_info, "Moon.Rendering", "ISliceRenderSettingsInfluencerOffset");
        }
    } // namespace ISliceRenderSettingsInfluencerOffset
} // namespace app::classes::types
