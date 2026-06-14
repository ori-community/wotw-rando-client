#pragma once
#include <Modloader/app/structs/SliceRenderSettingsInfluencerOrder__Enum.h>
#include <Modloader/app/structs/SliceRenderSettingsInfluencerOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SliceRenderSettingsInfluencerOrder__Enum {
        inline app::SliceRenderSettingsInfluencerOrder__Enum__Class** type_info() {
            static app::SliceRenderSettingsInfluencerOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SliceRenderSettingsInfluencerOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SliceRenderSettingsInfluencerOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::SliceRenderSettingsInfluencerOrder__Enum__Class>(type_info(), "Moon.Rendering", "SliceRenderSettingsInfluencerOrder");
        }
        inline app::SliceRenderSettingsInfluencerOrder__Enum* create() {
            return il2cpp::create_object<app::SliceRenderSettingsInfluencerOrder__Enum>(get_class());
        }
    } // namespace SliceRenderSettingsInfluencerOrder__Enum
} // namespace app::classes::types
