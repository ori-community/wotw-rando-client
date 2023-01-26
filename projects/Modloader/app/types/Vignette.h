#pragma once
#include <Modloader/app/structs/Vignette.h>
#include <Modloader/app/structs/Vignette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vignette {
        inline app::Vignette__Class** type_info() {
            static app::Vignette__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vignette__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vignette__Class* get_class() {
            return il2cpp::get_class<app::Vignette__Class>(type_info(), "", "Vignette");
        }
        inline app::Vignette* create() {
            return il2cpp::create_object<app::Vignette>(get_class());
        }
    } // namespace Vignette
} // namespace app::classes::types
