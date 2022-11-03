#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CertificateEncoding__Enum {
        namespace {
            inline app::CertificateEncoding__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CertificateEncoding__Enum__Class** type_info = &type_info_ref;
        inline app::CertificateEncoding__Enum__Class* get_class() {
            return il2cpp::get_class<app::CertificateEncoding__Enum__Class>(type_info, "System.Net", "CertificateEncoding");
        }
        inline app::CertificateEncoding__Enum* create() {
            return il2cpp::create_object<app::CertificateEncoding__Enum>(get_class());
        }
    } // namespace CertificateEncoding__Enum
} // namespace app::classes::types
