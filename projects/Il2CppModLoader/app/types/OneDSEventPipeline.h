#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneDSEventPipeline {
        namespace {
            app::OneDSEventPipeline__Class* type_info_ref = nullptr;
        }
        app::OneDSEventPipeline__Class** type_info = &type_info_ref;
        inline app::OneDSEventPipeline__Class* get_class() {
            return il2cpp::get_class<app::OneDSEventPipeline__Class>(type_info, "PlayFab.Pipeline", "OneDSEventPipeline");
        }
        inline app::OneDSEventPipeline* create() {
            return il2cpp::create_object<app::OneDSEventPipeline>(get_class());
        }
    } // namespace OneDSEventPipeline
} // namespace app::classes::types
