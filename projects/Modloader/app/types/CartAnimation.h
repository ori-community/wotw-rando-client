#pragma once
#include <Modloader/app/structs/CartAnimation.h>
#include <Modloader/app/structs/CartAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartAnimation {
        inline app::CartAnimation__Class** type_info() {
            static app::CartAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartAnimation__Class* get_class() {
            return il2cpp::get_class<app::CartAnimation__Class>(type_info(), "", "CartAnimation");
        }
        inline app::CartAnimation* create() {
            return il2cpp::create_object<app::CartAnimation>(get_class());
        }
    } // namespace CartAnimation
} // namespace app::classes::types
