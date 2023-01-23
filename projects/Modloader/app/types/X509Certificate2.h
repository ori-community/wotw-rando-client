#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509Certificate2__Class.h>
#include <Modloader/app/structs/X509Certificate2.h>

namespace app::classes::types {
    namespace X509Certificate2 {
        inline app::X509Certificate2__Class** type_info = (app::X509Certificate2__Class**)(modloader::win::memory::resolve_rva(0x0476BBC0));
        inline app::X509Certificate2__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate2__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Certificate2");
        }
        inline app::X509Certificate2* create() {
            return il2cpp::create_object<app::X509Certificate2>(get_class());
        }
    } // namespace X509Certificate2
} // namespace app::classes::types
