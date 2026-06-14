#pragma once
#include <Modloader/app/structs/MonoRemoteCertificateValidationCallback.h>
#include <Modloader/app/structs/MonoRemoteCertificateValidationCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoRemoteCertificateValidationCallback {
        inline app::MonoRemoteCertificateValidationCallback__Class** type_info() {
            static app::MonoRemoteCertificateValidationCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoRemoteCertificateValidationCallback__Class**)(modloader::win::memory::resolve_rva(0x0470BB88));
            }
            return cache;
        }
        inline app::MonoRemoteCertificateValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::MonoRemoteCertificateValidationCallback__Class>(type_info(), "Mono.Security.Interface", "MonoRemoteCertificateValidationCallback");
        }
        inline app::MonoRemoteCertificateValidationCallback* create() {
            return il2cpp::create_object<app::MonoRemoteCertificateValidationCallback>(get_class());
        }
    } // namespace MonoRemoteCertificateValidationCallback
} // namespace app::classes::types
