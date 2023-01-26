#pragma once
#include <Modloader/app/structs/NativeContainerIsReadOnlyAttribute.h>
#include <Modloader/app/structs/NativeContainerIsReadOnlyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeContainerIsReadOnlyAttribute {
        inline app::NativeContainerIsReadOnlyAttribute__Class** type_info() {
            static app::NativeContainerIsReadOnlyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeContainerIsReadOnlyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeContainerIsReadOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerIsReadOnlyAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeContainerIsReadOnlyAttribute");
        }
        inline app::NativeContainerIsReadOnlyAttribute* create() {
            return il2cpp::create_object<app::NativeContainerIsReadOnlyAttribute>(get_class());
        }
    } // namespace NativeContainerIsReadOnlyAttribute
} // namespace app::classes::types
