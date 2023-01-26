#pragma once
#include <Modloader/app/structs/FastVignette.h>
#include <Modloader/app/structs/FastVignette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FastVignette {
        inline app::FastVignette__Class** type_info() {
            static app::FastVignette__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FastVignette__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FastVignette__Class* get_class() {
            return il2cpp::get_class<app::FastVignette__Class>(type_info(), "Colorful", "FastVignette");
        }
        inline app::FastVignette* create() {
            return il2cpp::create_object<app::FastVignette>(get_class());
        }
    } // namespace FastVignette
} // namespace app::classes::types
