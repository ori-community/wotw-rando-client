#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SHA1__Class.h>
#include <Modloader/app/structs/SHA1.h>

namespace app::classes::types {
    namespace SHA1 {
        inline app::SHA1__Class** type_info = (app::SHA1__Class**)(modloader::win::memory::resolve_rva(0x04733180));
        inline app::SHA1__Class* get_class() {
            return il2cpp::get_class<app::SHA1__Class>(type_info, "System.Security.Cryptography", "SHA1");
        }
        inline app::SHA1* create() {
            return il2cpp::create_object<app::SHA1>(get_class());
        }
    } // namespace SHA1
} // namespace app::classes::types
