#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComDefaultInterfaceAttribute {
        namespace {
            app::ComDefaultInterfaceAttribute__Class* type_info_ref = nullptr;
        }
        app::ComDefaultInterfaceAttribute__Class** type_info = &type_info_ref;
        inline app::ComDefaultInterfaceAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComDefaultInterfaceAttribute__Class>(type_info, "System.Runtime.InteropServices", "ComDefaultInterfaceAttribute");
        }
        inline app::ComDefaultInterfaceAttribute* create() {
            return il2cpp::create_object<app::ComDefaultInterfaceAttribute>(get_class());
        }
    } // namespace ComDefaultInterfaceAttribute
} // namespace app::classes::types
