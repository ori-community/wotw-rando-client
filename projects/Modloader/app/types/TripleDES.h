#pragma once
#include <Modloader/app/structs/TripleDES.h>
#include <Modloader/app/structs/TripleDES__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TripleDES {
        inline app::TripleDES__Class** type_info() {
            static app::TripleDES__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TripleDES__Class**)(modloader::win::memory::resolve_rva(0x0473FA58));
            }
            return cache;
        }
        inline app::TripleDES__Class* get_class() {
            return il2cpp::get_class<app::TripleDES__Class>(type_info(), "System.Security.Cryptography", "TripleDES");
        }
        inline app::TripleDES* create() {
            return il2cpp::create_object<app::TripleDES>(get_class());
        }
    } // namespace TripleDES
} // namespace app::classes::types
