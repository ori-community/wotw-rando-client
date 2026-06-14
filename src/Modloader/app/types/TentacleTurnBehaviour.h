#pragma once
#include <Modloader/app/structs/TentacleTurnBehaviour.h>
#include <Modloader/app/structs/TentacleTurnBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleTurnBehaviour {
        inline app::TentacleTurnBehaviour__Class** type_info() {
            static app::TentacleTurnBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleTurnBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleTurnBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleTurnBehaviour__Class>(type_info(), "Moon", "TentacleTurnBehaviour");
        }
        inline app::TentacleTurnBehaviour* create() {
            return il2cpp::create_object<app::TentacleTurnBehaviour>(get_class());
        }
    } // namespace TentacleTurnBehaviour
} // namespace app::classes::types
