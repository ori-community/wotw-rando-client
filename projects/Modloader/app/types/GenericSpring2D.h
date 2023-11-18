#pragma once
#include <Modloader/app/structs/GenericSpring2D.h>
#include <Modloader/app/structs/GenericSpring2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericSpring2D {
        inline app::GenericSpring2D__Class** type_info() {
            static app::GenericSpring2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericSpring2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericSpring2D__Class* get_class() {
            return il2cpp::get_class<app::GenericSpring2D__Class>(type_info(), "", "GenericSpring2D");
        }
        inline app::GenericSpring2D* create() {
            return il2cpp::create_object<app::GenericSpring2D>(get_class());
        }
    } // namespace GenericSpring2D
} // namespace app::classes::types
