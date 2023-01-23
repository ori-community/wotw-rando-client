#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICertificatePolicy__Class.h>

namespace app::classes::types {
    namespace ICertificatePolicy {
        inline app::ICertificatePolicy__Class** type_info = (app::ICertificatePolicy__Class**)(modloader::win::memory::resolve_rva(0x047542B0));
        inline app::ICertificatePolicy__Class* get_class() {
            return il2cpp::get_class<app::ICertificatePolicy__Class>(type_info, "System.Net", "ICertificatePolicy");
        }
    } // namespace ICertificatePolicy
} // namespace app::classes::types
