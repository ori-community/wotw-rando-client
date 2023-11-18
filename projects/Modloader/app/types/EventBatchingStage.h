#pragma once
#include <Modloader/app/structs/EventBatchingStage.h>
#include <Modloader/app/structs/EventBatchingStage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventBatchingStage {
        inline app::EventBatchingStage__Class** type_info() {
            static app::EventBatchingStage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventBatchingStage__Class**)(modloader::win::memory::resolve_rva(0x0471DC90));
            }
            return cache;
        }
        inline app::EventBatchingStage__Class* get_class() {
            return il2cpp::get_class<app::EventBatchingStage__Class>(type_info(), "PlayFab.Pipeline", "EventBatchingStage");
        }
        inline app::EventBatchingStage* create() {
            return il2cpp::create_object<app::EventBatchingStage>(get_class());
        }
    } // namespace EventBatchingStage
} // namespace app::classes::types
