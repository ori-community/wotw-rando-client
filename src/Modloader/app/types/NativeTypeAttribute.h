#pragma once
#include <Modloader/app/structs/NativeTypeAttribute.h>
#include <Modloader/app/structs/NativeTypeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeTypeAttribute {
        inline app::NativeTypeAttribute__Class** type_info() {
            static app::NativeTypeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeTypeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeTypeAttribute__Class>(type_info(), "UnityEngine.Bindings", "NativeTypeAttribute");
        }
        inline app::NativeTypeAttribute* create() {
            return il2cpp::create_object<app::NativeTypeAttribute>(get_class());
        }
    } // namespace NativeTypeAttribute
} // namespace app::classes::types
