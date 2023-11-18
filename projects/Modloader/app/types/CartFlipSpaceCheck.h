#pragma once
#include <Modloader/app/structs/CartFlipSpaceCheck.h>
#include <Modloader/app/structs/CartFlipSpaceCheck__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartFlipSpaceCheck {
        inline app::CartFlipSpaceCheck__Class** type_info() {
            static app::CartFlipSpaceCheck__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartFlipSpaceCheck__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartFlipSpaceCheck__Class* get_class() {
            return il2cpp::get_class<app::CartFlipSpaceCheck__Class>(type_info(), "", "CartFlipSpaceCheck");
        }
        inline app::CartFlipSpaceCheck* create() {
            return il2cpp::create_object<app::CartFlipSpaceCheck>(get_class());
        }
    } // namespace CartFlipSpaceCheck
} // namespace app::classes::types
