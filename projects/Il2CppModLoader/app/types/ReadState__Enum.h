#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReadState__Enum {
        namespace {
            inline app::ReadState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ReadState__Enum__Class** type_info = &type_info_ref;
        inline app::ReadState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReadState__Enum__Class>(type_info, "System.Net", "ReadState");
        }
        inline app::ReadState__Enum* create() {
            return il2cpp::create_object<app::ReadState__Enum>(get_class());
        }
    } // namespace ReadState__Enum
} // namespace app::classes::types
