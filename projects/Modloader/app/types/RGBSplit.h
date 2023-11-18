#pragma once
#include <Modloader/app/structs/RGBSplit.h>
#include <Modloader/app/structs/RGBSplit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RGBSplit {
        inline app::RGBSplit__Class** type_info() {
            static app::RGBSplit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RGBSplit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RGBSplit__Class* get_class() {
            return il2cpp::get_class<app::RGBSplit__Class>(type_info(), "Colorful", "RGBSplit");
        }
        inline app::RGBSplit* create() {
            return il2cpp::create_object<app::RGBSplit>(get_class());
        }
    } // namespace RGBSplit
} // namespace app::classes::types
