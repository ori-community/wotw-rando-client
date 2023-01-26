#pragma once
#include <Modloader/app/structs/NativeDisableUnsafePtrRestrictionAttribute.h>
#include <Modloader/app/structs/NativeDisableUnsafePtrRestrictionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeDisableUnsafePtrRestrictionAttribute {
        inline app::NativeDisableUnsafePtrRestrictionAttribute__Class** type_info() {
            static app::NativeDisableUnsafePtrRestrictionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeDisableUnsafePtrRestrictionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeDisableUnsafePtrRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeDisableUnsafePtrRestrictionAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeDisableUnsafePtrRestrictionAttribute");
        }
        inline app::NativeDisableUnsafePtrRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeDisableUnsafePtrRestrictionAttribute>(get_class());
        }
    } // namespace NativeDisableUnsafePtrRestrictionAttribute
} // namespace app::classes::types
