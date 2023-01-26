#pragma once
#include <Modloader/app/structs/BitConverterLE.h>
#include <Modloader/app/structs/BitConverterLE__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitConverterLE {
        inline app::BitConverterLE__Class** type_info() {
            static app::BitConverterLE__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BitConverterLE__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BitConverterLE__Class* get_class() {
            return il2cpp::get_class<app::BitConverterLE__Class>(type_info(), "Mono.Security", "BitConverterLE");
        }
        inline app::BitConverterLE* create() {
            return il2cpp::create_object<app::BitConverterLE>(get_class());
        }
    } // namespace BitConverterLE
} // namespace app::classes::types
