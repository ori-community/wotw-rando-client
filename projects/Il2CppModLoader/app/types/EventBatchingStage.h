#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventBatchingStage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventBatchingStage__Class** type_info;
        inline app::EventBatchingStage__Class* get_class() {
            return il2cpp::get_class<app::EventBatchingStage__Class>(type_info, "PlayFab.Pipeline", "EventBatchingStage");
        }
        inline app::EventBatchingStage* create() {
            return il2cpp::create_object<app::EventBatchingStage>(get_class());
        }
    } // namespace EventBatchingStage
} // namespace app::classes::types
