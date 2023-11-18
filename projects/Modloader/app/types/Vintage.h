#pragma once
#include <Modloader/app/structs/Vintage.h>
#include <Modloader/app/structs/Vintage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vintage {
        inline app::Vintage__Class** type_info() {
            static app::Vintage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vintage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vintage__Class* get_class() {
            return il2cpp::get_class<app::Vintage__Class>(type_info(), "Colorful", "Vintage");
        }
        inline app::Vintage* create() {
            return il2cpp::create_object<app::Vintage>(get_class());
        }
    } // namespace Vintage
} // namespace app::classes::types
