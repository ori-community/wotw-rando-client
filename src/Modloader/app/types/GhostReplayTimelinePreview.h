#pragma once
#include <Modloader/app/structs/GhostReplayTimelinePreview.h>
#include <Modloader/app/structs/GhostReplayTimelinePreview__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostReplayTimelinePreview {
        inline app::GhostReplayTimelinePreview__Class** type_info() {
            static app::GhostReplayTimelinePreview__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostReplayTimelinePreview__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostReplayTimelinePreview__Class* get_class() {
            return il2cpp::get_class<app::GhostReplayTimelinePreview__Class>(type_info(), "", "GhostReplayTimelinePreview");
        }
        inline app::GhostReplayTimelinePreview* create() {
            return il2cpp::create_object<app::GhostReplayTimelinePreview>(get_class());
        }
    } // namespace GhostReplayTimelinePreview
} // namespace app::classes::types
