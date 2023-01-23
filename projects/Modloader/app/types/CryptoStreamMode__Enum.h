#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CryptoStreamMode__Enum__Class.h>
#include <Modloader/app/structs/CryptoStreamMode__Enum.h>

namespace app::classes::types {
    namespace CryptoStreamMode__Enum {
        namespace {
            inline app::CryptoStreamMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CryptoStreamMode__Enum__Class** type_info = &type_info_ref;
        inline app::CryptoStreamMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CryptoStreamMode__Enum__Class>(type_info, "System.Security.Cryptography", "CryptoStreamMode");
        }
        inline app::CryptoStreamMode__Enum* create() {
            return il2cpp::create_object<app::CryptoStreamMode__Enum>(get_class());
        }
    } // namespace CryptoStreamMode__Enum
} // namespace app::classes::types
