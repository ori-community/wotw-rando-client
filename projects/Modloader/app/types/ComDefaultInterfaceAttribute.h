#pragma once
#include <Modloader/app/structs/ComDefaultInterfaceAttribute.h>
#include <Modloader/app/structs/ComDefaultInterfaceAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComDefaultInterfaceAttribute {
        inline app::ComDefaultInterfaceAttribute__Class** type_info() {
            static app::ComDefaultInterfaceAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComDefaultInterfaceAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComDefaultInterfaceAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComDefaultInterfaceAttribute__Class>(type_info(), "System.Runtime.InteropServices", "ComDefaultInterfaceAttribute");
        }
        inline app::ComDefaultInterfaceAttribute* create() {
            return il2cpp::create_object<app::ComDefaultInterfaceAttribute>(get_class());
        }
    } // namespace ComDefaultInterfaceAttribute
} // namespace app::classes::types
