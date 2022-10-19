#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VarEnum__Enum {
        namespace {
            inline app::VarEnum__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VarEnum__Enum__Class** type_info = &type_info_ref;
        inline app::VarEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::VarEnum__Enum__Class>(type_info, "System.Runtime.InteropServices", "VarEnum");
        }
        inline app::VarEnum__Enum* create() {
            return il2cpp::create_object<app::VarEnum__Enum>(get_class());
        }
    } // namespace VarEnum__Enum
} // namespace app::classes::types
