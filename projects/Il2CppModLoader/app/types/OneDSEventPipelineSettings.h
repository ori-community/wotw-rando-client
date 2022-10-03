#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneDSEventPipelineSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OneDSEventPipelineSettings__Class** type_info;
        inline app::OneDSEventPipelineSettings__Class* get_class() {
            return il2cpp::get_class<app::OneDSEventPipelineSettings__Class>(type_info, "PlayFab.Pipeline", "OneDSEventPipelineSettings");
        }
        inline app::OneDSEventPipelineSettings* create() {
            return il2cpp::create_object<app::OneDSEventPipelineSettings>(get_class());
        }
    } // namespace OneDSEventPipelineSettings
} // namespace app::classes::types
