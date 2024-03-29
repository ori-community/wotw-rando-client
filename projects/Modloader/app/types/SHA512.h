#pragma once
#include <Modloader/app/structs/SHA512.h>
#include <Modloader/app/structs/SHA512__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SHA512 {
        inline app::SHA512__Class** type_info() {
            static app::SHA512__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SHA512__Class**)(modloader::win::memory::resolve_rva(0x04763180));
            }
            return cache;
        }
        inline app::SHA512__Class* get_class() {
            return il2cpp::get_class<app::SHA512__Class>(type_info(), "System.Security.Cryptography", "SHA512");
        }
        inline app::SHA512* create() {
            return il2cpp::create_object<app::SHA512>(get_class());
        }
    } // namespace SHA512
} // namespace app::classes::types
