#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SliceRenderSettingsInfluencerOrder__Enum {
        namespace {
            inline app::SliceRenderSettingsInfluencerOrder__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SliceRenderSettingsInfluencerOrder__Enum__Class** type_info = &type_info_ref;
        inline app::SliceRenderSettingsInfluencerOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::SliceRenderSettingsInfluencerOrder__Enum__Class>(type_info, "Moon.Rendering", "SliceRenderSettingsInfluencerOrder");
        }
        inline app::SliceRenderSettingsInfluencerOrder__Enum* create() {
            return il2cpp::create_object<app::SliceRenderSettingsInfluencerOrder__Enum>(get_class());
        }
    } // namespace SliceRenderSettingsInfluencerOrder__Enum
} // namespace app::classes::types
