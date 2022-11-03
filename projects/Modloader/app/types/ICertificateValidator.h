#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICertificateValidator {
        inline app::ICertificateValidator__Class** type_info = (app::ICertificateValidator__Class**)(modloader::win::memory::resolve_rva(0x04731040));
        inline app::ICertificateValidator__Class* get_class() {
            return il2cpp::get_class<app::ICertificateValidator__Class>(type_info, "Mono.Security.Interface", "ICertificateValidator");
        }
    } // namespace ICertificateValidator
} // namespace app::classes::types
