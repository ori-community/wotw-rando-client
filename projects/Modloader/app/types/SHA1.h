#pragma once
#include <Modloader/app/structs/SHA1.h>
#include <Modloader/app/structs/SHA1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SHA1 {
        inline app::SHA1__Class** type_info() {
            static app::SHA1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SHA1__Class**)(modloader::win::memory::resolve_rva(0x04733180));
            }
            return cache;
        }
        inline app::SHA1__Class* get_class() {
            return il2cpp::get_class<app::SHA1__Class>(type_info(), "System.Security.Cryptography", "SHA1");
        }
        inline app::SHA1* create() {
            return il2cpp::create_object<app::SHA1>(get_class());
        }
    } // namespace SHA1
} // namespace app::classes::types
