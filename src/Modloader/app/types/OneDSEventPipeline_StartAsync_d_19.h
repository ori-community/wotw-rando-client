#pragma once
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_19.h>
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_19__Boxed.h>
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_19__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDSEventPipeline_StartAsync_d_19 {
        inline app::OneDSEventPipeline_StartAsync_d_19__Class** type_info() {
            static app::OneDSEventPipeline_StartAsync_d_19__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneDSEventPipeline_StartAsync_d_19__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneDSEventPipeline_StartAsync_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventPipeline_StartAsync_d_19__Class>(type_info(), "PlayFab.Pipeline", "OneDSEventPipeline", "<StartAsync>d__19");
        }
        inline app::OneDSEventPipeline_StartAsync_d_19* create() {
            return il2cpp::create_object<app::OneDSEventPipeline_StartAsync_d_19>(get_class());
        }
        inline app::OneDSEventPipeline_StartAsync_d_19__Boxed* box(app::OneDSEventPipeline_StartAsync_d_19 value) {
            return il2cpp::box_value<app::OneDSEventPipeline_StartAsync_d_19__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventPipeline_StartAsync_d_19
} // namespace app::classes::types
