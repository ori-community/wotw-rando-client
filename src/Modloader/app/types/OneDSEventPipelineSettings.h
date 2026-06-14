#pragma once
#include <Modloader/app/structs/OneDSEventPipelineSettings.h>
#include <Modloader/app/structs/OneDSEventPipelineSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDSEventPipelineSettings {
        inline app::OneDSEventPipelineSettings__Class** type_info() {
            static app::OneDSEventPipelineSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OneDSEventPipelineSettings__Class**)(modloader::win::memory::resolve_rva(0x04777830));
            }
            return cache;
        }
        inline app::OneDSEventPipelineSettings__Class* get_class() {
            return il2cpp::get_class<app::OneDSEventPipelineSettings__Class>(type_info(), "PlayFab.Pipeline", "OneDSEventPipelineSettings");
        }
        inline app::OneDSEventPipelineSettings* create() {
            return il2cpp::create_object<app::OneDSEventPipelineSettings>(get_class());
        }
    } // namespace OneDSEventPipelineSettings
} // namespace app::classes::types
