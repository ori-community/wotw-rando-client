#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnsafeNclNativeMethods_HttpApi_Enum__Enum {
        namespace {
            inline app::UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class** type_info = &type_info_ref;
        inline app::UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class>(type_info, "System.Net", "UnsafeNclNativeMethods+HttpApi", "Enum");
        }
        inline app::UnsafeNclNativeMethods_HttpApi_Enum__Enum* create() {
            return il2cpp::create_object<app::UnsafeNclNativeMethods_HttpApi_Enum__Enum>(get_class());
        }
    } // namespace UnsafeNclNativeMethods_HttpApi_Enum__Enum
} // namespace app::classes::types
