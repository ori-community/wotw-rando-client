#pragma once
#include <Modloader/app/structs/NativePropertyAttribute.h>
#include <Modloader/app/structs/NativePropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativePropertyAttribute {
        inline app::NativePropertyAttribute__Class** type_info() {
            static app::NativePropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativePropertyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativePropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativePropertyAttribute__Class>(type_info(), "UnityEngine.Bindings", "NativePropertyAttribute");
        }
        inline app::NativePropertyAttribute* create() {
            return il2cpp::create_object<app::NativePropertyAttribute>(get_class());
        }
    } // namespace NativePropertyAttribute
} // namespace app::classes::types
