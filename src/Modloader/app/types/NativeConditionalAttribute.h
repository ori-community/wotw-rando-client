#pragma once
#include <Modloader/app/structs/NativeConditionalAttribute.h>
#include <Modloader/app/structs/NativeConditionalAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeConditionalAttribute {
        inline app::NativeConditionalAttribute__Class** type_info() {
            static app::NativeConditionalAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeConditionalAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeConditionalAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeConditionalAttribute__Class>(type_info(), "UnityEngine.Bindings", "NativeConditionalAttribute");
        }
        inline app::NativeConditionalAttribute* create() {
            return il2cpp::create_object<app::NativeConditionalAttribute>(get_class());
        }
    } // namespace NativeConditionalAttribute
} // namespace app::classes::types
