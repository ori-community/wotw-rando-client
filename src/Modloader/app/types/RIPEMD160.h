#pragma once
#include <Modloader/app/structs/RIPEMD160.h>
#include <Modloader/app/structs/RIPEMD160__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RIPEMD160 {
        inline app::RIPEMD160__Class** type_info() {
            static app::RIPEMD160__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RIPEMD160__Class**)(modloader::win::memory::resolve_rva(0x04737580));
            }
            return cache;
        }
        inline app::RIPEMD160__Class* get_class() {
            return il2cpp::get_class<app::RIPEMD160__Class>(type_info(), "System.Security.Cryptography", "RIPEMD160");
        }
        inline app::RIPEMD160* create() {
            return il2cpp::create_object<app::RIPEMD160>(get_class());
        }
    } // namespace RIPEMD160
} // namespace app::classes::types
