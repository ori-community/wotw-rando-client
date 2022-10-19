#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsnDecodeStatus__Enum {
        namespace {
            inline app::AsnDecodeStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AsnDecodeStatus__Enum__Class** type_info = &type_info_ref;
        inline app::AsnDecodeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::AsnDecodeStatus__Enum__Class>(type_info, "System.Security.Cryptography", "AsnDecodeStatus");
        }
        inline app::AsnDecodeStatus__Enum* create() {
            return il2cpp::create_object<app::AsnDecodeStatus__Enum>(get_class());
        }
    } // namespace AsnDecodeStatus__Enum
} // namespace app::classes::types
