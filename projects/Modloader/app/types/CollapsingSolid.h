#pragma once
#include <Modloader/app/structs/CollapsingSolid.h>
#include <Modloader/app/structs/CollapsingSolid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollapsingSolid {
        inline app::CollapsingSolid__Class** type_info() {
            static app::CollapsingSolid__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollapsingSolid__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollapsingSolid__Class* get_class() {
            return il2cpp::get_class<app::CollapsingSolid__Class>(type_info(), "", "CollapsingSolid");
        }
        inline app::CollapsingSolid* create() {
            return il2cpp::create_object<app::CollapsingSolid>(get_class());
        }
    } // namespace CollapsingSolid
} // namespace app::classes::types
