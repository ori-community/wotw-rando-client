#pragma once
#include <Modloader/app/structs/Rijndael.h>
#include <Modloader/app/structs/Rijndael__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rijndael {
        inline app::Rijndael__Class** type_info() {
            static app::Rijndael__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Rijndael__Class**)(modloader::win::memory::resolve_rva(0x0476B6B0));
            }
            return cache;
        }
        inline app::Rijndael__Class* get_class() {
            return il2cpp::get_class<app::Rijndael__Class>(type_info(), "System.Security.Cryptography", "Rijndael");
        }
        inline app::Rijndael* create() {
            return il2cpp::create_object<app::Rijndael>(get_class());
        }
    } // namespace Rijndael
} // namespace app::classes::types
