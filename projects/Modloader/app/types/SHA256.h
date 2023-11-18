#pragma once
#include <Modloader/app/structs/SHA256.h>
#include <Modloader/app/structs/SHA256__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SHA256 {
        inline app::SHA256__Class** type_info() {
            static app::SHA256__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SHA256__Class**)(modloader::win::memory::resolve_rva(0x04749F10));
            }
            return cache;
        }
        inline app::SHA256__Class* get_class() {
            return il2cpp::get_class<app::SHA256__Class>(type_info(), "System.Security.Cryptography", "SHA256");
        }
        inline app::SHA256* create() {
            return il2cpp::create_object<app::SHA256>(get_class());
        }
    } // namespace SHA256
} // namespace app::classes::types
