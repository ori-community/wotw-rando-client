#pragma once
#include <Modloader/app/structs/RIPEMD160Managed.h>
#include <Modloader/app/structs/RIPEMD160Managed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RIPEMD160Managed {
        inline app::RIPEMD160Managed__Class** type_info() {
            static app::RIPEMD160Managed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RIPEMD160Managed__Class**)(modloader::win::memory::resolve_rva(0x04772CA8));
            }
            return cache;
        }
        inline app::RIPEMD160Managed__Class* get_class() {
            return il2cpp::get_class<app::RIPEMD160Managed__Class>(type_info(), "System.Security.Cryptography", "RIPEMD160Managed");
        }
        inline app::RIPEMD160Managed* create() {
            return il2cpp::create_object<app::RIPEMD160Managed>(get_class());
        }
    } // namespace RIPEMD160Managed
} // namespace app::classes::types
