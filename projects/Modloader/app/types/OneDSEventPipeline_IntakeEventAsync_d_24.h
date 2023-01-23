#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OneDSEventPipeline_IntakeEventAsync_d_24__Class.h>
#include <Modloader/app/structs/OneDSEventPipeline_IntakeEventAsync_d_24.h>
#include <Modloader/app/structs/OneDSEventPipeline_IntakeEventAsync_d_24__Boxed.h>

namespace app::classes::types {
    namespace OneDSEventPipeline_IntakeEventAsync_d_24 {
        namespace {
            inline app::OneDSEventPipeline_IntakeEventAsync_d_24__Class* type_info_ref = nullptr;
        }
        inline app::OneDSEventPipeline_IntakeEventAsync_d_24__Class** type_info = &type_info_ref;
        inline app::OneDSEventPipeline_IntakeEventAsync_d_24__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventPipeline_IntakeEventAsync_d_24__Class>(type_info, "PlayFab.Pipeline", "OneDSEventPipeline", "<IntakeEventAsync>d__24");
        }
        inline app::OneDSEventPipeline_IntakeEventAsync_d_24* create() {
            return il2cpp::create_object<app::OneDSEventPipeline_IntakeEventAsync_d_24>(get_class());
        }
        inline app::OneDSEventPipeline_IntakeEventAsync_d_24__Boxed* box(app::OneDSEventPipeline_IntakeEventAsync_d_24 value) {
            return il2cpp::box_value<app::OneDSEventPipeline_IntakeEventAsync_d_24__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventPipeline_IntakeEventAsync_d_24
} // namespace app::classes::types
