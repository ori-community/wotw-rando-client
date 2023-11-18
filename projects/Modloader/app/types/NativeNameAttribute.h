#pragma once
#include <Modloader/app/structs/NativeNameAttribute.h>
#include <Modloader/app/structs/NativeNameAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeNameAttribute {
        inline app::NativeNameAttribute__Class** type_info() {
            static app::NativeNameAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeNameAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeNameAttribute__Class>(type_info(), "UnityEngine.Bindings", "NativeNameAttribute");
        }
        inline app::NativeNameAttribute* create() {
            return il2cpp::create_object<app::NativeNameAttribute>(get_class());
        }
    } // namespace NativeNameAttribute
} // namespace app::classes::types
