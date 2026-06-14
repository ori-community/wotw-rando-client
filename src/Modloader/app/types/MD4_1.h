#pragma once
#include <Modloader/app/structs/MD4_1.h>
#include <Modloader/app/structs/MD4_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MD4_1 {
        inline app::MD4_1__Class** type_info() {
            static app::MD4_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MD4_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MD4_1__Class* get_class() {
            return il2cpp::get_class<app::MD4_1__Class>(type_info(), "Mono.Security.Cryptography", "MD4");
        }
        inline app::MD4_1* create() {
            return il2cpp::create_object<app::MD4_1>(get_class());
        }
    } // namespace MD4_1
} // namespace app::classes::types
