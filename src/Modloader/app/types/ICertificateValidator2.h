#pragma once
#include <Modloader/app/structs/ICertificateValidator2.h>
#include <Modloader/app/structs/ICertificateValidator2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICertificateValidator2 {
        inline app::ICertificateValidator2__Class** type_info() {
            static app::ICertificateValidator2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICertificateValidator2__Class**)(modloader::win::memory::resolve_rva(0x04794CD0));
            }
            return cache;
        }
        inline app::ICertificateValidator2__Class* get_class() {
            return il2cpp::get_class<app::ICertificateValidator2__Class>(type_info(), "Mono.Security.Interface", "ICertificateValidator2");
        }
    } // namespace ICertificateValidator2
} // namespace app::classes::types
