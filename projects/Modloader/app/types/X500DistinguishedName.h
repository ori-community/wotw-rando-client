#pragma once
#include <Modloader/app/structs/X500DistinguishedName.h>
#include <Modloader/app/structs/X500DistinguishedName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X500DistinguishedName {
        inline app::X500DistinguishedName__Class** type_info() {
            static app::X500DistinguishedName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X500DistinguishedName__Class**)(modloader::win::memory::resolve_rva(0x047065F8));
            }
            return cache;
        }
        inline app::X500DistinguishedName__Class* get_class() {
            return il2cpp::get_class<app::X500DistinguishedName__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X500DistinguishedName");
        }
        inline app::X500DistinguishedName* create() {
            return il2cpp::create_object<app::X500DistinguishedName>(get_class());
        }
    } // namespace X500DistinguishedName
} // namespace app::classes::types
