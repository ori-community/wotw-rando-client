#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TcpState__Enum {
        namespace {
            inline app::TcpState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TcpState__Enum__Class** type_info = &type_info_ref;
        inline app::TcpState__Enum__Class* get_class() {
            return il2cpp::get_class<app::TcpState__Enum__Class>(type_info, "System.Net.NetworkInformation", "TcpState");
        }
        inline app::TcpState__Enum* create() {
            return il2cpp::create_object<app::TcpState__Enum>(get_class());
        }
    } // namespace TcpState__Enum
} // namespace app::classes::types
