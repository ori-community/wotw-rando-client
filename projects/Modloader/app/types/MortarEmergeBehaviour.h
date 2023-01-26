#pragma once
#include <Modloader/app/structs/MortarEmergeBehaviour.h>
#include <Modloader/app/structs/MortarEmergeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarEmergeBehaviour {
        inline app::MortarEmergeBehaviour__Class** type_info() {
            static app::MortarEmergeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarEmergeBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarEmergeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarEmergeBehaviour__Class>(type_info(), "", "MortarEmergeBehaviour");
        }
        inline app::MortarEmergeBehaviour* create() {
            return il2cpp::create_object<app::MortarEmergeBehaviour>(get_class());
        }
    } // namespace MortarEmergeBehaviour
} // namespace app::classes::types
