#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostReplayTimelinePreview {
        namespace {
            app::GhostReplayTimelinePreview__Class* type_info_ref = nullptr;
        }
        app::GhostReplayTimelinePreview__Class** type_info = &type_info_ref;
        inline app::GhostReplayTimelinePreview__Class* get_class() {
            return il2cpp::get_class<app::GhostReplayTimelinePreview__Class>(type_info, "", "GhostReplayTimelinePreview");
        }
        inline app::GhostReplayTimelinePreview* create() {
            return il2cpp::create_object<app::GhostReplayTimelinePreview>(get_class());
        }
    } // namespace GhostReplayTimelinePreview
} // namespace app::classes::types
