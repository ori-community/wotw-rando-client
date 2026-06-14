#pragma once
#include <Modloader/app/structs/TimelinePreviewRequirement.h>
#include <Modloader/app/structs/TimelinePreviewRequirement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelinePreviewRequirement {
        inline app::TimelinePreviewRequirement__Class** type_info() {
            static app::TimelinePreviewRequirement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelinePreviewRequirement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelinePreviewRequirement__Class* get_class() {
            return il2cpp::get_class<app::TimelinePreviewRequirement__Class>(type_info(), "", "TimelinePreviewRequirement");
        }
        inline app::TimelinePreviewRequirement* create() {
            return il2cpp::create_object<app::TimelinePreviewRequirement>(get_class());
        }
    } // namespace TimelinePreviewRequirement
} // namespace app::classes::types
