#pragma once
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_20.h>
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_20__Boxed.h>
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_20__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDSEventPipeline_StartAsync_d_20 {
        inline app::OneDSEventPipeline_StartAsync_d_20__Class** type_info() {
            static app::OneDSEventPipeline_StartAsync_d_20__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneDSEventPipeline_StartAsync_d_20__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneDSEventPipeline_StartAsync_d_20__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventPipeline_StartAsync_d_20__Class>(type_info(), "PlayFab.Pipeline", "OneDSEventPipeline", "<StartAsync>d__20");
        }
        inline app::OneDSEventPipeline_StartAsync_d_20* create() {
            return il2cpp::create_object<app::OneDSEventPipeline_StartAsync_d_20>(get_class());
        }
        inline app::OneDSEventPipeline_StartAsync_d_20__Boxed* box(app::OneDSEventPipeline_StartAsync_d_20 value) {
            return il2cpp::box_value<app::OneDSEventPipeline_StartAsync_d_20__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventPipeline_StartAsync_d_20
} // namespace app::classes::types
