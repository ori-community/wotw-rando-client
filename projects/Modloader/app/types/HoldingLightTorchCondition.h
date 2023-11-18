#pragma once
#include <Modloader/app/structs/HoldingLightTorchCondition.h>
#include <Modloader/app/structs/HoldingLightTorchCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HoldingLightTorchCondition {
        inline app::HoldingLightTorchCondition__Class** type_info() {
            static app::HoldingLightTorchCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HoldingLightTorchCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HoldingLightTorchCondition__Class* get_class() {
            return il2cpp::get_class<app::HoldingLightTorchCondition__Class>(type_info(), "", "HoldingLightTorchCondition");
        }
        inline app::HoldingLightTorchCondition* create() {
            return il2cpp::create_object<app::HoldingLightTorchCondition>(get_class());
        }
    } // namespace HoldingLightTorchCondition
} // namespace app::classes::types
