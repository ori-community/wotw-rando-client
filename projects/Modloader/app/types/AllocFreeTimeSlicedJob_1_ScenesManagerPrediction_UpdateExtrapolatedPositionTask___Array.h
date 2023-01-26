#pragma once
#include <Modloader/app/structs/AllocFreeTimeSlicedJob_1_ScenesManagerPredictio_UpdateExtrapolatedPositionTas___Arra__Clas.h>
#include <Modloader/app/structs/AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array {
        inline app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__Class** type_info() {
            static app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__Class**)(modloader::win::memory::resolve_rva(0x047078C0));
            }
            return cache;
        }
        inline app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__Class* get_class() {
            return il2cpp::get_class<app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__Class>(type_info(), "Moon.TimeSlicer", "AllocFreeTimeSlicedJob`1[ScenesManagerPrediction+UpdateExtrapolatedPositionTask][]");
        }
        inline app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array* create() {
            return il2cpp::create_object<app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array>(get_class());
        }
    } // namespace AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array
} // namespace app::classes::types
