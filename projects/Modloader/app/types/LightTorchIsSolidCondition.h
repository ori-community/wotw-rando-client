#pragma once
#include <Modloader/app/structs/LightTorchIsSolidCondition.h>
#include <Modloader/app/structs/LightTorchIsSolidCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightTorchIsSolidCondition {
        inline app::LightTorchIsSolidCondition__Class** type_info() {
            static app::LightTorchIsSolidCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightTorchIsSolidCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightTorchIsSolidCondition__Class* get_class() {
            return il2cpp::get_class<app::LightTorchIsSolidCondition__Class>(type_info(), "", "LightTorchIsSolidCondition");
        }
        inline app::LightTorchIsSolidCondition* create() {
            return il2cpp::create_object<app::LightTorchIsSolidCondition>(get_class());
        }
    } // namespace LightTorchIsSolidCondition
} // namespace app::classes::types
