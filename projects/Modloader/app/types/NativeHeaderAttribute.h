#pragma once
#include <Modloader/app/structs/NativeHeaderAttribute.h>
#include <Modloader/app/structs/NativeHeaderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeHeaderAttribute {
        inline app::NativeHeaderAttribute__Class** type_info() {
            static app::NativeHeaderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeHeaderAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeHeaderAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeHeaderAttribute__Class>(type_info(), "UnityEngine.Bindings", "NativeHeaderAttribute");
        }
        inline app::NativeHeaderAttribute* create() {
            return il2cpp::create_object<app::NativeHeaderAttribute>(get_class());
        }
    } // namespace NativeHeaderAttribute
} // namespace app::classes::types
