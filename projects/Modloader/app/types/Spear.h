#pragma once
#include <Modloader/app/structs/Spear.h>
#include <Modloader/app/structs/Spear__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Spear {
        inline app::Spear__Class** type_info() {
            static app::Spear__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Spear__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Spear__Class* get_class() {
            return il2cpp::get_class<app::Spear__Class>(type_info(), "", "Spear");
        }
        inline app::Spear* create() {
            return il2cpp::create_object<app::Spear>(get_class());
        }
    } // namespace Spear
} // namespace app::classes::types
