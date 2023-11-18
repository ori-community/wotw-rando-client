#pragma once
#include <Modloader/app/structs/Dithering.h>
#include <Modloader/app/structs/Dithering__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dithering {
        inline app::Dithering__Class** type_info() {
            static app::Dithering__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dithering__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dithering__Class* get_class() {
            return il2cpp::get_class<app::Dithering__Class>(type_info(), "Colorful", "Dithering");
        }
        inline app::Dithering* create() {
            return il2cpp::create_object<app::Dithering>(get_class());
        }
    } // namespace Dithering
} // namespace app::classes::types
