#pragma once
#include <Modloader/app/structs/Halftone.h>
#include <Modloader/app/structs/Halftone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Halftone {
        inline app::Halftone__Class** type_info() {
            static app::Halftone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Halftone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Halftone__Class* get_class() {
            return il2cpp::get_class<app::Halftone__Class>(type_info(), "Colorful", "Halftone");
        }
        inline app::Halftone* create() {
            return il2cpp::create_object<app::Halftone>(get_class());
        }
    } // namespace Halftone
} // namespace app::classes::types
