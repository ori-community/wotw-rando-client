#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventBatchingStage_GetInputConsumingEnumerable_d_19 {
        inline app::EventBatchingStage_GetInputConsumingEnumerable_d_19__Class** type_info = (app::EventBatchingStage_GetInputConsumingEnumerable_d_19__Class**)(modloader::win::memory::resolve_rva(0x0478A5C8));
        inline app::EventBatchingStage_GetInputConsumingEnumerable_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::EventBatchingStage_GetInputConsumingEnumerable_d_19__Class>(type_info, "PlayFab.Pipeline", "EventBatchingStage", "<GetInputConsumingEnumerable>d__19");
        }
        inline app::EventBatchingStage_GetInputConsumingEnumerable_d_19* create() {
            return il2cpp::create_object<app::EventBatchingStage_GetInputConsumingEnumerable_d_19>(get_class());
        }
    } // namespace EventBatchingStage_GetInputConsumingEnumerable_d_19
} // namespace app::classes::types
