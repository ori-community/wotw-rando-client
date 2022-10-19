#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EncryptionPolicy__Enum {
        namespace {
            inline app::EncryptionPolicy__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EncryptionPolicy__Enum__Class** type_info = &type_info_ref;
        inline app::EncryptionPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::EncryptionPolicy__Enum__Class>(type_info, "System.Net.Security", "EncryptionPolicy");
        }
        inline app::EncryptionPolicy__Enum* create() {
            return il2cpp::create_object<app::EncryptionPolicy__Enum>(get_class());
        }
    } // namespace EncryptionPolicy__Enum
} // namespace app::classes::types
