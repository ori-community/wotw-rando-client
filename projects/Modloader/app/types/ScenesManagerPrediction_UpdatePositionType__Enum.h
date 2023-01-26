#pragma once
#include <Modloader/app/structs/ScenesManagerPrediction_UpdatePositionType__Enum.h>
#include <Modloader/app/structs/ScenesManagerPrediction_UpdatePositionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerPrediction_UpdatePositionType__Enum {
        inline app::ScenesManagerPrediction_UpdatePositionType__Enum__Class** type_info() {
            static app::ScenesManagerPrediction_UpdatePositionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenesManagerPrediction_UpdatePositionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenesManagerPrediction_UpdatePositionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManagerPrediction_UpdatePositionType__Enum__Class>(type_info(), "", "ScenesManagerPrediction", "UpdatePositionType");
        }
        inline app::ScenesManagerPrediction_UpdatePositionType__Enum* create() {
            return il2cpp::create_object<app::ScenesManagerPrediction_UpdatePositionType__Enum>(get_class());
        }
    } // namespace ScenesManagerPrediction_UpdatePositionType__Enum
} // namespace app::classes::types
