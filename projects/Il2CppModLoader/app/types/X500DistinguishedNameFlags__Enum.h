#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X500DistinguishedNameFlags__Enum {
        namespace {
            inline app::X500DistinguishedNameFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::X500DistinguishedNameFlags__Enum__Class** type_info = &type_info_ref;
        inline app::X500DistinguishedNameFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::X500DistinguishedNameFlags__Enum__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X500DistinguishedNameFlags");
        }
        inline app::X500DistinguishedNameFlags__Enum* create() {
            return il2cpp::create_object<app::X500DistinguishedNameFlags__Enum>(get_class());
        }
    } // namespace X500DistinguishedNameFlags__Enum
} // namespace app::classes::types
