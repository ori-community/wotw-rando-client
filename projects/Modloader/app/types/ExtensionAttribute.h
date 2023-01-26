#pragma once
#include <Modloader/app/structs/ExtensionAttribute.h>
#include <Modloader/app/structs/ExtensionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtensionAttribute {
        inline app::ExtensionAttribute__Class** type_info() {
            static app::ExtensionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExtensionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExtensionAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExtensionAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "ExtensionAttribute");
        }
        inline app::ExtensionAttribute* create() {
            return il2cpp::create_object<app::ExtensionAttribute>(get_class());
        }
    } // namespace ExtensionAttribute
} // namespace app::classes::types
