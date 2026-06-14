#pragma once
#include <Modloader/app/structs/SeinHeavySpiritSlash.h>
#include <Modloader/app/structs/SeinHeavySpiritSlash__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHeavySpiritSlash {
        inline app::SeinHeavySpiritSlash__Class** type_info() {
            static app::SeinHeavySpiritSlash__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHeavySpiritSlash__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHeavySpiritSlash__Class* get_class() {
            return il2cpp::get_class<app::SeinHeavySpiritSlash__Class>(type_info(), "", "SeinHeavySpiritSlash");
        }
        inline app::SeinHeavySpiritSlash* create() {
            return il2cpp::create_object<app::SeinHeavySpiritSlash>(get_class());
        }
    } // namespace SeinHeavySpiritSlash
} // namespace app::classes::types
