#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultCertificatePolicy {
        inline app::DefaultCertificatePolicy__Class** type_info = (app::DefaultCertificatePolicy__Class**)(modloader::win::memory::resolve_rva(0x0474A760));
        inline app::DefaultCertificatePolicy__Class* get_class() {
            return il2cpp::get_class<app::DefaultCertificatePolicy__Class>(type_info, "System.Net", "DefaultCertificatePolicy");
        }
        inline app::DefaultCertificatePolicy* create() {
            return il2cpp::create_object<app::DefaultCertificatePolicy>(get_class());
        }
    } // namespace DefaultCertificatePolicy
} // namespace app::classes::types
