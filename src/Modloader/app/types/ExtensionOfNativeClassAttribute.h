#pragma once
#include <Modloader/app/structs/ExtensionOfNativeClassAttribute.h>
#include <Modloader/app/structs/ExtensionOfNativeClassAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtensionOfNativeClassAttribute {
        inline app::ExtensionOfNativeClassAttribute__Class** type_info() {
            static app::ExtensionOfNativeClassAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExtensionOfNativeClassAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExtensionOfNativeClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExtensionOfNativeClassAttribute__Class>(type_info(), "UnityEngine", "ExtensionOfNativeClassAttribute");
        }
        inline app::ExtensionOfNativeClassAttribute* create() {
            return il2cpp::create_object<app::ExtensionOfNativeClassAttribute>(get_class());
        }
    } // namespace ExtensionOfNativeClassAttribute
} // namespace app::classes::types
