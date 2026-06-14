#pragma once
#include <Modloader/app/structs/GenericSpring1D.h>
#include <Modloader/app/structs/GenericSpring1D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericSpring1D {
        inline app::GenericSpring1D__Class** type_info() {
            static app::GenericSpring1D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericSpring1D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericSpring1D__Class* get_class() {
            return il2cpp::get_class<app::GenericSpring1D__Class>(type_info(), "", "GenericSpring1D");
        }
        inline app::GenericSpring1D* create() {
            return il2cpp::create_object<app::GenericSpring1D>(get_class());
        }
    } // namespace GenericSpring1D
} // namespace app::classes::types
