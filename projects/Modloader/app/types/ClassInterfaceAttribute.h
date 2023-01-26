#pragma once
#include <Modloader/app/structs/ClassInterfaceAttribute.h>
#include <Modloader/app/structs/ClassInterfaceAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClassInterfaceAttribute {
        inline app::ClassInterfaceAttribute__Class** type_info() {
            static app::ClassInterfaceAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClassInterfaceAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClassInterfaceAttribute__Class* get_class() {
            return il2cpp::get_class<app::ClassInterfaceAttribute__Class>(type_info(), "System.Runtime.InteropServices", "ClassInterfaceAttribute");
        }
        inline app::ClassInterfaceAttribute* create() {
            return il2cpp::create_object<app::ClassInterfaceAttribute>(get_class());
        }
    } // namespace ClassInterfaceAttribute
} // namespace app::classes::types
