#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HoldingLightTorchCondition__Class.h>
#include <Modloader/app/structs/HoldingLightTorchCondition.h>

namespace app::classes::types {
    namespace HoldingLightTorchCondition {
        namespace {
            inline app::HoldingLightTorchCondition__Class* type_info_ref = nullptr;
        }
        inline app::HoldingLightTorchCondition__Class** type_info = &type_info_ref;
        inline app::HoldingLightTorchCondition__Class* get_class() {
            return il2cpp::get_class<app::HoldingLightTorchCondition__Class>(type_info, "", "HoldingLightTorchCondition");
        }
        inline app::HoldingLightTorchCondition* create() {
            return il2cpp::create_object<app::HoldingLightTorchCondition>(get_class());
        }
    } // namespace HoldingLightTorchCondition
} // namespace app::classes::types
