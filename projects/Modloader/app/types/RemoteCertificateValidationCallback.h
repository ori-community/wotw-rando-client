#pragma once
#include <Modloader/app/structs/RemoteCertificateValidationCallback.h>
#include <Modloader/app/structs/RemoteCertificateValidationCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteCertificateValidationCallback {
        inline app::RemoteCertificateValidationCallback__Class** type_info() {
            static app::RemoteCertificateValidationCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoteCertificateValidationCallback__Class**)(modloader::win::memory::resolve_rva(0x04727530));
            }
            return cache;
        }
        inline app::RemoteCertificateValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::RemoteCertificateValidationCallback__Class>(type_info(), "System.Net.Security", "RemoteCertificateValidationCallback");
        }
        inline app::RemoteCertificateValidationCallback* create() {
            return il2cpp::create_object<app::RemoteCertificateValidationCallback>(get_class());
        }
    } // namespace RemoteCertificateValidationCallback
} // namespace app::classes::types
