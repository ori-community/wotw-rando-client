#pragma once
#include <Modloader/app/structs/Verlet.h>
#include <Modloader/app/structs/Verlet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Verlet {
        inline app::Verlet__Class** type_info() {
            static app::Verlet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Verlet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Verlet__Class* get_class() {
            return il2cpp::get_class<app::Verlet__Class>(type_info(), "", "Verlet");
        }
        inline app::Verlet* create() {
            return il2cpp::create_object<app::Verlet>(get_class());
        }
    } // namespace Verlet
} // namespace app::classes::types
