#pragma once
#include <Modloader/app/structs/NativeMethodAttribute.h>
#include <Modloader/app/structs/NativeMethodAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeMethodAttribute {
        inline app::NativeMethodAttribute__Class** type_info() {
            static app::NativeMethodAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeMethodAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeMethodAttribute__Class>(type_info(), "UnityEngine.Bindings", "NativeMethodAttribute");
        }
        inline app::NativeMethodAttribute* create() {
            return il2cpp::create_object<app::NativeMethodAttribute>(get_class());
        }
    } // namespace NativeMethodAttribute
} // namespace app::classes::types
