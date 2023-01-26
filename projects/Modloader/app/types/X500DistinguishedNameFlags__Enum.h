#pragma once
#include <Modloader/app/structs/X500DistinguishedNameFlags__Enum.h>
#include <Modloader/app/structs/X500DistinguishedNameFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X500DistinguishedNameFlags__Enum {
        inline app::X500DistinguishedNameFlags__Enum__Class** type_info() {
            static app::X500DistinguishedNameFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X500DistinguishedNameFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X500DistinguishedNameFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::X500DistinguishedNameFlags__Enum__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X500DistinguishedNameFlags");
        }
        inline app::X500DistinguishedNameFlags__Enum* create() {
            return il2cpp::create_object<app::X500DistinguishedNameFlags__Enum>(get_class());
        }
    } // namespace X500DistinguishedNameFlags__Enum
} // namespace app::classes::types
