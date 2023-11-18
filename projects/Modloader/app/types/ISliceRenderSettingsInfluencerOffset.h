#pragma once
#include <Modloader/app/structs/ISliceRenderSettingsInfluencerOffset.h>
#include <Modloader/app/structs/ISliceRenderSettingsInfluencerOffset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencerOffset {
        inline app::ISliceRenderSettingsInfluencerOffset__Class** type_info() {
            static app::ISliceRenderSettingsInfluencerOffset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISliceRenderSettingsInfluencerOffset__Class**)(modloader::win::memory::resolve_rva(0x0471FDD8));
            }
            return cache;
        }
        inline app::ISliceRenderSettingsInfluencerOffset__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencerOffset__Class>(type_info(), "Moon.Rendering", "ISliceRenderSettingsInfluencerOffset");
        }
    } // namespace ISliceRenderSettingsInfluencerOffset
} // namespace app::classes::types
