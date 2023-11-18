#pragma once
#include <Modloader/app/structs/ICertificateValidator.h>
#include <Modloader/app/structs/ICertificateValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICertificateValidator {
        inline app::ICertificateValidator__Class** type_info() {
            static app::ICertificateValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICertificateValidator__Class**)(modloader::win::memory::resolve_rva(0x04731040));
            }
            return cache;
        }
        inline app::ICertificateValidator__Class* get_class() {
            return il2cpp::get_class<app::ICertificateValidator__Class>(type_info(), "Mono.Security.Interface", "ICertificateValidator");
        }
    } // namespace ICertificateValidator
} // namespace app::classes::types
