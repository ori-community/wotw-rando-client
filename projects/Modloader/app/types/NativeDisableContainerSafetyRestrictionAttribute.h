#pragma once
#include <Modloader/app/structs/NativeDisableContainerSafetyRestrictionAttribute.h>
#include <Modloader/app/structs/NativeDisableContainerSafetyRestrictionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeDisableContainerSafetyRestrictionAttribute {
        inline app::NativeDisableContainerSafetyRestrictionAttribute__Class** type_info() {
            static app::NativeDisableContainerSafetyRestrictionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeDisableContainerSafetyRestrictionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeDisableContainerSafetyRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeDisableContainerSafetyRestrictionAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeDisableContainerSafetyRestrictionAttribute");
        }
        inline app::NativeDisableContainerSafetyRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeDisableContainerSafetyRestrictionAttribute>(get_class());
        }
    } // namespace NativeDisableContainerSafetyRestrictionAttribute
} // namespace app::classes::types
