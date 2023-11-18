#pragma once
#include <Modloader/app/structs/HMACSHA512.h>
#include <Modloader/app/structs/HMACSHA512__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HMACSHA512 {
        inline app::HMACSHA512__Class** type_info() {
            static app::HMACSHA512__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HMACSHA512__Class**)(modloader::win::memory::resolve_rva(0x047186D0));
            }
            return cache;
        }
        inline app::HMACSHA512__Class* get_class() {
            return il2cpp::get_class<app::HMACSHA512__Class>(type_info(), "System.Security.Cryptography", "HMACSHA512");
        }
        inline app::HMACSHA512* create() {
            return il2cpp::create_object<app::HMACSHA512>(get_class());
        }
    } // namespace HMACSHA512
} // namespace app::classes::types
