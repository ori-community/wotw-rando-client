#pragma once
#include <Modloader/app/structs/PKCS12_DeriveBytes.h>
#include <Modloader/app/structs/PKCS12_DeriveBytes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS12_DeriveBytes {
        inline app::PKCS12_DeriveBytes__Class** type_info() {
            static app::PKCS12_DeriveBytes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS12_DeriveBytes__Class**)(modloader::win::memory::resolve_rva(0x04776A70));
            }
            return cache;
        }
        inline app::PKCS12_DeriveBytes__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS12_DeriveBytes__Class>(type_info(), "Mono.Security.X509", "PKCS12", "DeriveBytes");
        }
        inline app::PKCS12_DeriveBytes* create() {
            return il2cpp::create_object<app::PKCS12_DeriveBytes>(get_class());
        }
    } // namespace PKCS12_DeriveBytes
} // namespace app::classes::types
