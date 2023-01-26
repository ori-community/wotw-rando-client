#pragma once
#include <Modloader/app/structs/VintageFast.h>
#include <Modloader/app/structs/VintageFast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VintageFast {
        inline app::VintageFast__Class** type_info() {
            static app::VintageFast__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VintageFast__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VintageFast__Class* get_class() {
            return il2cpp::get_class<app::VintageFast__Class>(type_info(), "Colorful", "VintageFast");
        }
        inline app::VintageFast* create() {
            return il2cpp::create_object<app::VintageFast>(get_class());
        }
    } // namespace VintageFast
} // namespace app::classes::types
