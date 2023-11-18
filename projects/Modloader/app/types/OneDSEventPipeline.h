#pragma once
#include <Modloader/app/structs/OneDSEventPipeline.h>
#include <Modloader/app/structs/OneDSEventPipeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDSEventPipeline {
        inline app::OneDSEventPipeline__Class** type_info() {
            static app::OneDSEventPipeline__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneDSEventPipeline__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneDSEventPipeline__Class* get_class() {
            return il2cpp::get_class<app::OneDSEventPipeline__Class>(type_info(), "PlayFab.Pipeline", "OneDSEventPipeline");
        }
        inline app::OneDSEventPipeline* create() {
            return il2cpp::create_object<app::OneDSEventPipeline>(get_class());
        }
    } // namespace OneDSEventPipeline
} // namespace app::classes::types
