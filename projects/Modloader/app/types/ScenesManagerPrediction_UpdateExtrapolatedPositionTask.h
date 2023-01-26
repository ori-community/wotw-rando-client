#pragma once
#include <Modloader/app/structs/ScenesManagerPrediction_UpdateExtrapolatedPositionTask.h>
#include <Modloader/app/structs/ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed.h>
#include <Modloader/app/structs/ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerPrediction_UpdateExtrapolatedPositionTask {
        inline app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class** type_info() {
            static app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class>(type_info(), "", "ScenesManagerPrediction", "UpdateExtrapolatedPositionTask");
        }
        inline app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask* create() {
            return il2cpp::create_object<app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask>(get_class());
        }
        inline app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed* box(app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask value) {
            return il2cpp::box_value<app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed>(get_class(), value);
        }
    } // namespace ScenesManagerPrediction_UpdateExtrapolatedPositionTask
} // namespace app::classes::types
