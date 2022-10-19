#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InterfaceTypeAttribute {
        namespace {
            inline app::InterfaceTypeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::InterfaceTypeAttribute__Class** type_info = &type_info_ref;
        inline app::InterfaceTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::InterfaceTypeAttribute__Class>(type_info, "System.Runtime.InteropServices", "InterfaceTypeAttribute");
        }
        inline app::InterfaceTypeAttribute* create() {
            return il2cpp::create_object<app::InterfaceTypeAttribute>(get_class());
        }
    } // namespace InterfaceTypeAttribute
} // namespace app::classes::types
