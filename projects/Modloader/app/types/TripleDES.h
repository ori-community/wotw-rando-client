#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TripleDES {
        inline app::TripleDES__Class** type_info = (app::TripleDES__Class**)(modloader::win::memory::resolve_rva(0x0473FA58));
        inline app::TripleDES__Class* get_class() {
            return il2cpp::get_class<app::TripleDES__Class>(type_info, "System.Security.Cryptography", "TripleDES");
        }
        inline app::TripleDES* create() {
            return il2cpp::create_object<app::TripleDES>(get_class());
        }
    } // namespace TripleDES
} // namespace app::classes::types
