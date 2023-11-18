#pragma once
#include <Modloader/app/structs/HoldingTorchCondition.h>
#include <Modloader/app/structs/HoldingTorchCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HoldingTorchCondition {
        inline app::HoldingTorchCondition__Class** type_info() {
            static app::HoldingTorchCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HoldingTorchCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HoldingTorchCondition__Class* get_class() {
            return il2cpp::get_class<app::HoldingTorchCondition__Class>(type_info(), "", "HoldingTorchCondition");
        }
        inline app::HoldingTorchCondition* create() {
            return il2cpp::create_object<app::HoldingTorchCondition>(get_class());
        }
    } // namespace HoldingTorchCondition
} // namespace app::classes::types
