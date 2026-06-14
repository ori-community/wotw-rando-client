#pragma once
#include <Modloader/app/structs/HideOnMenuOpen.h>
#include <Modloader/app/structs/HideOnMenuOpen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HideOnMenuOpen {
        inline app::HideOnMenuOpen__Class** type_info() {
            static app::HideOnMenuOpen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HideOnMenuOpen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HideOnMenuOpen__Class* get_class() {
            return il2cpp::get_class<app::HideOnMenuOpen__Class>(type_info(), "", "HideOnMenuOpen");
        }
        inline app::HideOnMenuOpen* create() {
            return il2cpp::create_object<app::HideOnMenuOpen>(get_class());
        }
    } // namespace HideOnMenuOpen
} // namespace app::classes::types
