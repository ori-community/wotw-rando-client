#pragma once
#include <Modloader/app/structs/MD4.h>
#include <Modloader/app/structs/MD4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MD4 {
        inline app::MD4__Class** type_info() {
            static app::MD4__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MD4__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MD4__Class* get_class() {
            return il2cpp::get_class<app::MD4__Class>(type_info(), "Mono.Security.Cryptography", "MD4");
        }
        inline app::MD4* create() {
            return il2cpp::create_object<app::MD4>(get_class());
        }
    } // namespace MD4
} // namespace app::classes::types
