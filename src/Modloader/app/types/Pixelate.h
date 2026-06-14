#pragma once
#include <Modloader/app/structs/Pixelate.h>
#include <Modloader/app/structs/Pixelate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Pixelate {
        inline app::Pixelate__Class** type_info() {
            static app::Pixelate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Pixelate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Pixelate__Class* get_class() {
            return il2cpp::get_class<app::Pixelate__Class>(type_info(), "Colorful", "Pixelate");
        }
        inline app::Pixelate* create() {
            return il2cpp::create_object<app::Pixelate>(get_class());
        }
    } // namespace Pixelate
} // namespace app::classes::types
