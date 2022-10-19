#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventBatchingStage {
        inline app::EventBatchingStage__Class** type_info = (app::EventBatchingStage__Class**)(modloader::win::memory::resolve_rva(0x0471DC90));
        inline app::EventBatchingStage__Class* get_class() {
            return il2cpp::get_class<app::EventBatchingStage__Class>(type_info, "PlayFab.Pipeline", "EventBatchingStage");
        }
        inline app::EventBatchingStage* create() {
            return il2cpp::create_object<app::EventBatchingStage>(get_class());
        }
    } // namespace EventBatchingStage
} // namespace app::classes::types
