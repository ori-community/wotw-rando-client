#pragma once
#include <Modloader/app/structs/NativeContainerAttribute.h>
#include <Modloader/app/structs/NativeContainerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeContainerAttribute {
        inline app::NativeContainerAttribute__Class** type_info() {
            static app::NativeContainerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeContainerAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeContainerAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerAttribute__Class>(type_info(), "Unity.Collections.LowLevel.Unsafe", "NativeContainerAttribute");
        }
        inline app::NativeContainerAttribute* create() {
            return il2cpp::create_object<app::NativeContainerAttribute>(get_class());
        }
    } // namespace NativeContainerAttribute
} // namespace app::classes::types
