#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/INativeCertificateHelper__Class.h>

namespace app::classes::types {
    namespace INativeCertificateHelper {
        inline app::INativeCertificateHelper__Class** type_info = (app::INativeCertificateHelper__Class**)(modloader::win::memory::resolve_rva(0x0475DE48));
        inline app::INativeCertificateHelper__Class* get_class() {
            return il2cpp::get_class<app::INativeCertificateHelper__Class>(type_info, "System.Security.Cryptography.X509Certificates", "INativeCertificateHelper");
        }
    } // namespace INativeCertificateHelper
} // namespace app::classes::types
