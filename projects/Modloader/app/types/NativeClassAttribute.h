#pragma once
#include <Modloader/app/structs/NativeClassAttribute.h>
#include <Modloader/app/structs/NativeClassAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeClassAttribute {
        inline app::NativeClassAttribute__Class** type_info() {
            static app::NativeClassAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeClassAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeClassAttribute__Class>(type_info(), "UnityEngine", "NativeClassAttribute");
        }
        inline app::NativeClassAttribute* create() {
            return il2cpp::create_object<app::NativeClassAttribute>(get_class());
        }
    } // namespace NativeClassAttribute
} // namespace app::classes::types
