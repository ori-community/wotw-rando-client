#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BindingDirection__Enum {
        namespace {
            inline app::BindingDirection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BindingDirection__Enum__Class** type_info = &type_info_ref;
        inline app::BindingDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::BindingDirection__Enum__Class>(type_info, "System.ComponentModel", "BindingDirection");
        }
        inline app::BindingDirection__Enum* create() {
            return il2cpp::create_object<app::BindingDirection__Enum>(get_class());
        }
    } // namespace BindingDirection__Enum
} // namespace app::classes::types
