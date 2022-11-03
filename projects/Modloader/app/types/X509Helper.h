#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Helper {
        inline app::X509Helper__Class** type_info = (app::X509Helper__Class**)(modloader::win::memory::resolve_rva(0x04723FF0));
        inline app::X509Helper__Class* get_class() {
            return il2cpp::get_class<app::X509Helper__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Helper");
        }
        inline app::X509Helper* create() {
            return il2cpp::create_object<app::X509Helper>(get_class());
        }
    } // namespace X509Helper
} // namespace app::classes::types
