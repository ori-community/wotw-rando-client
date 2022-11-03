#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoRemoteCertificateValidationCallback {
        inline app::MonoRemoteCertificateValidationCallback__Class** type_info = (app::MonoRemoteCertificateValidationCallback__Class**)(modloader::win::memory::resolve_rva(0x0470BB88));
        inline app::MonoRemoteCertificateValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::MonoRemoteCertificateValidationCallback__Class>(type_info, "Mono.Security.Interface", "MonoRemoteCertificateValidationCallback");
        }
        inline app::MonoRemoteCertificateValidationCallback* create() {
            return il2cpp::create_object<app::MonoRemoteCertificateValidationCallback>(get_class());
        }
    } // namespace MonoRemoteCertificateValidationCallback
} // namespace app::classes::types
