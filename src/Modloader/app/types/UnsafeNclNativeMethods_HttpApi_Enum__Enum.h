#pragma once
#include <Modloader/app/structs/UnsafeNclNativeMethods_HttpApi_Enum__Enum.h>
#include <Modloader/app/structs/UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsafeNclNativeMethods_HttpApi_Enum__Enum {
        inline app::UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class** type_info() {
            static app::UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNclNativeMethods_HttpApi_Enum__Enum__Class>(type_info(), "System.Net", "UnsafeNclNativeMethods+HttpApi", "Enum");
        }
        inline app::UnsafeNclNativeMethods_HttpApi_Enum__Enum* create() {
            return il2cpp::create_object<app::UnsafeNclNativeMethods_HttpApi_Enum__Enum>(get_class());
        }
    } // namespace UnsafeNclNativeMethods_HttpApi_Enum__Enum
} // namespace app::classes::types
