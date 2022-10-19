#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CustomTypeDescriptor {
        namespace {
            inline app::CustomTypeDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::CustomTypeDescriptor__Class** type_info = &type_info_ref;
        inline app::CustomTypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::CustomTypeDescriptor__Class>(type_info, "System.ComponentModel", "CustomTypeDescriptor");
        }
        inline app::CustomTypeDescriptor* create() {
            return il2cpp::create_object<app::CustomTypeDescriptor>(get_class());
        }
    } // namespace CustomTypeDescriptor
} // namespace app::classes::types
