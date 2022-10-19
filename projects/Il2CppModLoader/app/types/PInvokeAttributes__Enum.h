#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PInvokeAttributes__Enum {
        namespace {
            inline app::PInvokeAttributes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PInvokeAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::PInvokeAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::PInvokeAttributes__Enum__Class>(type_info, "System.Reflection", "PInvokeAttributes");
        }
        inline app::PInvokeAttributes__Enum* create() {
            return il2cpp::create_object<app::PInvokeAttributes__Enum>(get_class());
        }
    } // namespace PInvokeAttributes__Enum
} // namespace app::classes::types
