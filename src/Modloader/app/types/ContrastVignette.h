#pragma once
#include <Modloader/app/structs/ContrastVignette.h>
#include <Modloader/app/structs/ContrastVignette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContrastVignette {
        inline app::ContrastVignette__Class** type_info() {
            static app::ContrastVignette__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContrastVignette__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContrastVignette__Class* get_class() {
            return il2cpp::get_class<app::ContrastVignette__Class>(type_info(), "Colorful", "ContrastVignette");
        }
        inline app::ContrastVignette* create() {
            return il2cpp::create_object<app::ContrastVignette>(get_class());
        }
    } // namespace ContrastVignette
} // namespace app::classes::types
