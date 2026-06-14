#pragma once
#include <Modloader/app/structs/SeinSpiritSlash.h>
#include <Modloader/app/structs/SeinSpiritSlash__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSlash {
        inline app::SeinSpiritSlash__Class** type_info() {
            static app::SeinSpiritSlash__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritSlash__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritSlash__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSlash__Class>(type_info(), "", "SeinSpiritSlash");
        }
        inline app::SeinSpiritSlash* create() {
            return il2cpp::create_object<app::SeinSpiritSlash>(get_class());
        }
    } // namespace SeinSpiritSlash
} // namespace app::classes::types
