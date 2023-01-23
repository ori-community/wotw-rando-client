#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EmbeddedTimelinePreview__Class.h>
#include <Modloader/app/structs/EmbeddedTimelinePreview.h>

namespace app::classes::types {
    namespace EmbeddedTimelinePreview {
        namespace {
            inline app::EmbeddedTimelinePreview__Class* type_info_ref = nullptr;
        }
        inline app::EmbeddedTimelinePreview__Class** type_info = &type_info_ref;
        inline app::EmbeddedTimelinePreview__Class* get_class() {
            return il2cpp::get_class<app::EmbeddedTimelinePreview__Class>(type_info, "", "EmbeddedTimelinePreview");
        }
        inline app::EmbeddedTimelinePreview* create() {
            return il2cpp::create_object<app::EmbeddedTimelinePreview>(get_class());
        }
    } // namespace EmbeddedTimelinePreview
} // namespace app::classes::types
