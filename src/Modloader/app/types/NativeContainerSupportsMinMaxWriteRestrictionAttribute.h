#pragma once
#include <Modloader/app/structs/NativeContainerSupportsMinMaxWriteRestrictionAttribute.h>
#include <Modloader/app/structs/NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeContainerSupportsMinMaxWriteRestrictionAttribute {
        inline app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class** type_info() {
            static app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsMinMaxWriteRestrictionAttribute");
        }
        inline app::NativeContainerSupportsMinMaxWriteRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeContainerSupportsMinMaxWriteRestrictionAttribute>(get_class());
        }
    } // namespace NativeContainerSupportsMinMaxWriteRestrictionAttribute
} // namespace app::classes::types
