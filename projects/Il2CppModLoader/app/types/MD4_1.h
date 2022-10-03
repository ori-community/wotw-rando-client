#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MD4_1 {
        namespace {
            app::MD4_1__Class* type_info_ref = nullptr;
        }
        app::MD4_1__Class** type_info = &type_info_ref;
        inline app::MD4_1__Class* get_class() {
            return il2cpp::get_class<app::MD4_1__Class>(type_info, "Mono.Security.Cryptography", "MD4");
        }
        inline app::MD4_1* create() {
            return il2cpp::create_object<app::MD4_1>(get_class());
        }
    } // namespace MD4_1
} // namespace app::classes::types
