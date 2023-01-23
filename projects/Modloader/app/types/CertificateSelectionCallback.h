#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CertificateSelectionCallback__Class.h>
#include <Modloader/app/structs/CertificateSelectionCallback.h>

namespace app::classes::types {
    namespace CertificateSelectionCallback {
        inline app::CertificateSelectionCallback__Class** type_info = (app::CertificateSelectionCallback__Class**)(modloader::win::memory::resolve_rva(0x0473F490));
        inline app::CertificateSelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::CertificateSelectionCallback__Class>(type_info, "Mono.Security.Protocol.Tls", "CertificateSelectionCallback");
        }
        inline app::CertificateSelectionCallback* create() {
            return il2cpp::create_object<app::CertificateSelectionCallback>(get_class());
        }
    } // namespace CertificateSelectionCallback
} // namespace app::classes::types
