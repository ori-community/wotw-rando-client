#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OneDSEventPipeline_StartAsync_d_19 {
        namespace {
            inline app::OneDSEventPipeline_StartAsync_d_19__Class* type_info_ref = nullptr;
        }
        inline app::OneDSEventPipeline_StartAsync_d_19__Class** type_info = &type_info_ref;
        inline app::OneDSEventPipeline_StartAsync_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventPipeline_StartAsync_d_19__Class>(type_info, "PlayFab.Pipeline", "OneDSEventPipeline", "<StartAsync>d__19");
        }
        inline app::OneDSEventPipeline_StartAsync_d_19* create() {
            return il2cpp::create_object<app::OneDSEventPipeline_StartAsync_d_19>(get_class());
        }
        inline app::OneDSEventPipeline_StartAsync_d_19__Boxed* box(app::OneDSEventPipeline_StartAsync_d_19 value) {
            return il2cpp::box_value<app::OneDSEventPipeline_StartAsync_d_19__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventPipeline_StartAsync_d_19
} // namespace app::classes::types
