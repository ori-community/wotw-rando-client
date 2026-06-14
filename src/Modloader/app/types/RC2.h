#pragma once
#include <Modloader/app/structs/RC2.h>
#include <Modloader/app/structs/RC2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RC2 {
        inline app::RC2__Class** type_info() {
            static app::RC2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RC2__Class**)(modloader::win::memory::resolve_rva(0x04705B70));
            }
            return cache;
        }
        inline app::RC2__Class* get_class() {
            return il2cpp::get_class<app::RC2__Class>(type_info(), "System.Security.Cryptography", "RC2");
        }
        inline app::RC2* create() {
            return il2cpp::create_object<app::RC2>(get_class());
        }
    } // namespace RC2
} // namespace app::classes::types
