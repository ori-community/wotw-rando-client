#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SHA256__Class.h>
#include <Modloader/app/structs/SHA256.h>

namespace app::classes::types {
    namespace SHA256 {
        inline app::SHA256__Class** type_info = (app::SHA256__Class**)(modloader::win::memory::resolve_rva(0x04749F10));
        inline app::SHA256__Class* get_class() {
            return il2cpp::get_class<app::SHA256__Class>(type_info, "System.Security.Cryptography", "SHA256");
        }
        inline app::SHA256* create() {
            return il2cpp::create_object<app::SHA256>(get_class());
        }
    } // namespace SHA256
} // namespace app::classes::types
