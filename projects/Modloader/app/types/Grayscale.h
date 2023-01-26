#pragma once
#include <Modloader/app/structs/Grayscale.h>
#include <Modloader/app/structs/Grayscale__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Grayscale {
        inline app::Grayscale__Class** type_info() {
            static app::Grayscale__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Grayscale__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Grayscale__Class* get_class() {
            return il2cpp::get_class<app::Grayscale__Class>(type_info(), "Colorful", "Grayscale");
        }
        inline app::Grayscale* create() {
            return il2cpp::create_object<app::Grayscale>(get_class());
        }
    } // namespace Grayscale
} // namespace app::classes::types
