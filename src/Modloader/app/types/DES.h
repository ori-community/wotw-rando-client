#pragma once
#include <Modloader/app/structs/DES.h>
#include <Modloader/app/structs/DES__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DES {
        inline app::DES__Class** type_info() {
            static app::DES__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DES__Class**)(modloader::win::memory::resolve_rva(0x04763BD0));
            }
            return cache;
        }
        inline app::DES__Class* get_class() {
            return il2cpp::get_class<app::DES__Class>(type_info(), "System.Security.Cryptography", "DES");
        }
        inline app::DES* create() {
            return il2cpp::create_object<app::DES>(get_class());
        }
    } // namespace DES
} // namespace app::classes::types
