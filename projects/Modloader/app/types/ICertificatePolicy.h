#pragma once
#include <Modloader/app/structs/ICertificatePolicy.h>
#include <Modloader/app/structs/ICertificatePolicy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICertificatePolicy {
        inline app::ICertificatePolicy__Class** type_info() {
            static app::ICertificatePolicy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICertificatePolicy__Class**)(modloader::win::memory::resolve_rva(0x047542B0));
            }
            return cache;
        }
        inline app::ICertificatePolicy__Class* get_class() {
            return il2cpp::get_class<app::ICertificatePolicy__Class>(type_info(), "System.Net", "ICertificatePolicy");
        }
    } // namespace ICertificatePolicy
} // namespace app::classes::types
