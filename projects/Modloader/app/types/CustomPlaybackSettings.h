#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CustomPlaybackSettings {
        namespace {
            inline app::CustomPlaybackSettings__Class* type_info_ref = nullptr;
        }
        inline app::CustomPlaybackSettings__Class** type_info = &type_info_ref;
        inline app::CustomPlaybackSettings__Class* get_class() {
            return il2cpp::get_class<app::CustomPlaybackSettings__Class>(type_info, "Moon.Timeline", "CustomPlaybackSettings");
        }
        inline app::CustomPlaybackSettings* create() {
            return il2cpp::create_object<app::CustomPlaybackSettings>(get_class());
        }
    } // namespace CustomPlaybackSettings
} // namespace app::classes::types
