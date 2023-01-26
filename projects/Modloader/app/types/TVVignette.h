#pragma once
#include <Modloader/app/structs/TVVignette.h>
#include <Modloader/app/structs/TVVignette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TVVignette {
        inline app::TVVignette__Class** type_info() {
            static app::TVVignette__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TVVignette__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TVVignette__Class* get_class() {
            return il2cpp::get_class<app::TVVignette__Class>(type_info(), "Colorful", "TVVignette");
        }
        inline app::TVVignette* create() {
            return il2cpp::create_object<app::TVVignette>(get_class());
        }
    } // namespace TVVignette
} // namespace app::classes::types
