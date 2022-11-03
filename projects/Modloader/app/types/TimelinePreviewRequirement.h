#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelinePreviewRequirement {
        namespace {
            inline app::TimelinePreviewRequirement__Class* type_info_ref = nullptr;
        }
        inline app::TimelinePreviewRequirement__Class** type_info = &type_info_ref;
        inline app::TimelinePreviewRequirement__Class* get_class() {
            return il2cpp::get_class<app::TimelinePreviewRequirement__Class>(type_info, "", "TimelinePreviewRequirement");
        }
        inline app::TimelinePreviewRequirement* create() {
            return il2cpp::create_object<app::TimelinePreviewRequirement>(get_class());
        }
    } // namespace TimelinePreviewRequirement
} // namespace app::classes::types
