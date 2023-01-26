#pragma once
#include <Modloader/app/structs/SHA1Internal.h>
#include <Modloader/app/structs/SHA1Internal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SHA1Internal {
        inline app::SHA1Internal__Class** type_info() {
            static app::SHA1Internal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SHA1Internal__Class**)(modloader::win::memory::resolve_rva(0x0474EE70));
            }
            return cache;
        }
        inline app::SHA1Internal__Class* get_class() {
            return il2cpp::get_class<app::SHA1Internal__Class>(type_info(), "System.Security.Cryptography", "SHA1Internal");
        }
        inline app::SHA1Internal* create() {
            return il2cpp::create_object<app::SHA1Internal>(get_class());
        }
    } // namespace SHA1Internal
} // namespace app::classes::types
