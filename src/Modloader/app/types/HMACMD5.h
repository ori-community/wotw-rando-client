#pragma once
#include <Modloader/app/structs/HMACMD5.h>
#include <Modloader/app/structs/HMACMD5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HMACMD5 {
        inline app::HMACMD5__Class** type_info() {
            static app::HMACMD5__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HMACMD5__Class**)(modloader::win::memory::resolve_rva(0x04736F20));
            }
            return cache;
        }
        inline app::HMACMD5__Class* get_class() {
            return il2cpp::get_class<app::HMACMD5__Class>(type_info(), "System.Security.Cryptography", "HMACMD5");
        }
        inline app::HMACMD5* create() {
            return il2cpp::create_object<app::HMACMD5>(get_class());
        }
    } // namespace HMACMD5
} // namespace app::classes::types
