#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoteCertificateValidationCallback__Class.h>
#include <Modloader/app/structs/RemoteCertificateValidationCallback.h>

namespace app::classes::types {
    namespace RemoteCertificateValidationCallback {
        inline app::RemoteCertificateValidationCallback__Class** type_info = (app::RemoteCertificateValidationCallback__Class**)(modloader::win::memory::resolve_rva(0x04727530));
        inline app::RemoteCertificateValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::RemoteCertificateValidationCallback__Class>(type_info, "System.Net.Security", "RemoteCertificateValidationCallback");
        }
        inline app::RemoteCertificateValidationCallback* create() {
            return il2cpp::create_object<app::RemoteCertificateValidationCallback>(get_class());
        }
    } // namespace RemoteCertificateValidationCallback
} // namespace app::classes::types
