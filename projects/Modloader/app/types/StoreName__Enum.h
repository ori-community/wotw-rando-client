#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StoreName__Enum {
        inline app::StoreName__Enum__Class** type_info = (app::StoreName__Enum__Class**)(modloader::win::memory::resolve_rva(0x04704B10));
        inline app::StoreName__Enum__Class* get_class() {
            return il2cpp::get_class<app::StoreName__Enum__Class>(type_info, "System.Security.Cryptography.X509Certificates", "StoreName");
        }
        inline app::StoreName__Enum* create() {
            return il2cpp::create_object<app::StoreName__Enum>(get_class());
        }
    } // namespace StoreName__Enum
} // namespace app::classes::types
