#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509BasicConstraintsExtension__Class.h>
#include <Modloader/app/structs/X509BasicConstraintsExtension.h>

namespace app::classes::types {
    namespace X509BasicConstraintsExtension {
        inline app::X509BasicConstraintsExtension__Class** type_info = (app::X509BasicConstraintsExtension__Class**)(modloader::win::memory::resolve_rva(0x0477E2A0));
        inline app::X509BasicConstraintsExtension__Class* get_class() {
            return il2cpp::get_class<app::X509BasicConstraintsExtension__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509BasicConstraintsExtension");
        }
        inline app::X509BasicConstraintsExtension* create() {
            return il2cpp::create_object<app::X509BasicConstraintsExtension>(get_class());
        }
    } // namespace X509BasicConstraintsExtension
} // namespace app::classes::types
