#pragma once
#include <Modloader/app/structs/TentacleDeath.h>
#include <Modloader/app/structs/TentacleDeath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleDeath {
        inline app::TentacleDeath__Class** type_info() {
            static app::TentacleDeath__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleDeath__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleDeath__Class* get_class() {
            return il2cpp::get_class<app::TentacleDeath__Class>(type_info(), "", "TentacleDeath");
        }
        inline app::TentacleDeath* create() {
            return il2cpp::create_object<app::TentacleDeath>(get_class());
        }
    } // namespace TentacleDeath
} // namespace app::classes::types
