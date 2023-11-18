#pragma once
#include <Modloader/app/structs/RC4.h>
#include <Modloader/app/structs/RC4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RC4 {
        inline app::RC4__Class** type_info() {
            static app::RC4__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RC4__Class**)(modloader::win::memory::resolve_rva(0x04741500));
            }
            return cache;
        }
        inline app::RC4__Class* get_class() {
            return il2cpp::get_class<app::RC4__Class>(type_info(), "Mono.Security.Cryptography", "RC4");
        }
        inline app::RC4* create() {
            return il2cpp::create_object<app::RC4>(get_class());
        }
    } // namespace RC4
} // namespace app::classes::types
