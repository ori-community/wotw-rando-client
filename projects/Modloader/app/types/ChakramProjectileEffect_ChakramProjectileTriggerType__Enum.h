#pragma once
#include <Modloader/app/structs/ChakramProjectileEffect_ChakramProjectileTriggerType__Enum.h>
#include <Modloader/app/structs/ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChakramProjectileEffect_ChakramProjectileTriggerType__Enum {
        inline app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class** type_info() {
            static app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class>(type_info(), "", "ChakramProjectileEffect", "ChakramProjectileTriggerType");
        }
        inline app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum* create() {
            return il2cpp::create_object<app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum>(get_class());
        }
    } // namespace ChakramProjectileEffect_ChakramProjectileTriggerType__Enum
} // namespace app::classes::types
