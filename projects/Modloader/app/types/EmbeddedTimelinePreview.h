#pragma once
#include <Modloader/app/structs/EmbeddedTimelinePreview.h>
#include <Modloader/app/structs/EmbeddedTimelinePreview__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmbeddedTimelinePreview {
        inline app::EmbeddedTimelinePreview__Class** type_info() {
            static app::EmbeddedTimelinePreview__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmbeddedTimelinePreview__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmbeddedTimelinePreview__Class* get_class() {
            return il2cpp::get_class<app::EmbeddedTimelinePreview__Class>(type_info(), "", "EmbeddedTimelinePreview");
        }
        inline app::EmbeddedTimelinePreview* create() {
            return il2cpp::create_object<app::EmbeddedTimelinePreview>(get_class());
        }
    } // namespace EmbeddedTimelinePreview
} // namespace app::classes::types
