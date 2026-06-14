#pragma once
#include <Modloader/app/structs/NativeWritableSelfAttribute.h>
#include <Modloader/app/structs/NativeWritableSelfAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeWritableSelfAttribute {
        inline app::NativeWritableSelfAttribute__Class** type_info() {
            static app::NativeWritableSelfAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeWritableSelfAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeWritableSelfAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeWritableSelfAttribute__Class>(type_info(), "UnityEngine.Bindings", "NativeWritableSelfAttribute");
        }
        inline app::NativeWritableSelfAttribute* create() {
            return il2cpp::create_object<app::NativeWritableSelfAttribute>(get_class());
        }
    } // namespace NativeWritableSelfAttribute
} // namespace app::classes::types
