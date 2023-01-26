#pragma once
#include <Modloader/app/structs/CertificateEncoding__Enum.h>
#include <Modloader/app/structs/CertificateEncoding__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CertificateEncoding__Enum {
        inline app::CertificateEncoding__Enum__Class** type_info() {
            static app::CertificateEncoding__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CertificateEncoding__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CertificateEncoding__Enum__Class* get_class() {
            return il2cpp::get_class<app::CertificateEncoding__Enum__Class>(type_info(), "System.Net", "CertificateEncoding");
        }
        inline app::CertificateEncoding__Enum* create() {
            return il2cpp::create_object<app::CertificateEncoding__Enum>(get_class());
        }
    } // namespace CertificateEncoding__Enum
} // namespace app::classes::types
