#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChakramProjectileEffect_ChakramProjectileTriggerType__Enum {
        namespace {
            inline app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class** type_info = &type_info_ref;
        inline app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class>(type_info, "", "ChakramProjectileEffect", "ChakramProjectileTriggerType");
        }
        inline app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum* create() {
            return il2cpp::create_object<app::ChakramProjectileEffect_ChakramProjectileTriggerType__Enum>(get_class());
        }
    } // namespace ChakramProjectileEffect_ChakramProjectileTriggerType__Enum
} // namespace app::classes::types
