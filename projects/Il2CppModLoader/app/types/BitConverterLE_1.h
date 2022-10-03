#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitConverterLE_1 {
        namespace {
            app::BitConverterLE_1__Class* type_info_ref = nullptr;
        }
        app::BitConverterLE_1__Class** type_info = &type_info_ref;
        inline app::BitConverterLE_1__Class* get_class() {
            return il2cpp::get_class<app::BitConverterLE_1__Class>(type_info, "Mono.Security", "BitConverterLE");
        }
        inline app::BitConverterLE_1* create() {
            return il2cpp::create_object<app::BitConverterLE_1>(get_class());
        }
    } // namespace BitConverterLE_1
} // namespace app::classes::types
