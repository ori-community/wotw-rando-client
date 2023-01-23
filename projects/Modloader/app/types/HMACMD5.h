#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HMACMD5__Class.h>
#include <Modloader/app/structs/HMACMD5.h>

namespace app::classes::types {
    namespace HMACMD5 {
        inline app::HMACMD5__Class** type_info = (app::HMACMD5__Class**)(modloader::win::memory::resolve_rva(0x04736F20));
        inline app::HMACMD5__Class* get_class() {
            return il2cpp::get_class<app::HMACMD5__Class>(type_info, "System.Security.Cryptography", "HMACMD5");
        }
        inline app::HMACMD5* create() {
            return il2cpp::create_object<app::HMACMD5>(get_class());
        }
    } // namespace HMACMD5
} // namespace app::classes::types
