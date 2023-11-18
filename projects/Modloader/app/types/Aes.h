#pragma once
#include <Modloader/app/structs/Aes.h>
#include <Modloader/app/structs/Aes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Aes {
        inline app::Aes__Class** type_info() {
            static app::Aes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Aes__Class**)(modloader::win::memory::resolve_rva(0x047688D0));
            }
            return cache;
        }
        inline app::Aes__Class* get_class() {
            return il2cpp::get_class<app::Aes__Class>(type_info(), "System.Security.Cryptography", "Aes");
        }
        inline app::Aes* create() {
            return il2cpp::create_object<app::Aes>(get_class());
        }
    } // namespace Aes
} // namespace app::classes::types
