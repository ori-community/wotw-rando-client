#pragma once
#include <Modloader/app/structs/BitConverterLE_1.h>
#include <Modloader/app/structs/BitConverterLE_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitConverterLE_1 {
        inline app::BitConverterLE_1__Class** type_info() {
            static app::BitConverterLE_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BitConverterLE_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BitConverterLE_1__Class* get_class() {
            return il2cpp::get_class<app::BitConverterLE_1__Class>(type_info(), "Mono.Security", "BitConverterLE");
        }
        inline app::BitConverterLE_1* create() {
            return il2cpp::create_object<app::BitConverterLE_1>(get_class());
        }
    } // namespace BitConverterLE_1
} // namespace app::classes::types
