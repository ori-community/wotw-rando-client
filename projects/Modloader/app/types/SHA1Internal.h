#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SHA1Internal {
        inline app::SHA1Internal__Class** type_info = (app::SHA1Internal__Class**)(modloader::win::memory::resolve_rva(0x0474EE70));
        inline app::SHA1Internal__Class* get_class() {
            return il2cpp::get_class<app::SHA1Internal__Class>(type_info, "System.Security.Cryptography", "SHA1Internal");
        }
        inline app::SHA1Internal* create() {
            return il2cpp::create_object<app::SHA1Internal>(get_class());
        }
    } // namespace SHA1Internal
} // namespace app::classes::types
