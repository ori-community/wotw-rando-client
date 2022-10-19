#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManagerPrediction_UpdateExtrapolatedPositionTask {
        namespace {
            inline app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class* type_info_ref = nullptr;
        }
        inline app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class** type_info = &type_info_ref;
        inline app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class>(type_info, "", "ScenesManagerPrediction", "UpdateExtrapolatedPositionTask");
        }
        inline app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask* create() {
            return il2cpp::create_object<app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask>(get_class());
        }
        inline app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed* box(app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask value) {
            return il2cpp::box_value<app::ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed>(get_class(), value);
        }
    } // namespace ScenesManagerPrediction_UpdateExtrapolatedPositionTask
} // namespace app::classes::types
