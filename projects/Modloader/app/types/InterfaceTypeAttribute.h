#pragma once
#include <Modloader/app/structs/InterfaceTypeAttribute.h>
#include <Modloader/app/structs/InterfaceTypeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterfaceTypeAttribute {
        inline app::InterfaceTypeAttribute__Class** type_info() {
            static app::InterfaceTypeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InterfaceTypeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InterfaceTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::InterfaceTypeAttribute__Class>(type_info(), "System.Runtime.InteropServices", "InterfaceTypeAttribute");
        }
        inline app::InterfaceTypeAttribute* create() {
            return il2cpp::create_object<app::InterfaceTypeAttribute>(get_class());
        }
    } // namespace InterfaceTypeAttribute
} // namespace app::classes::types
