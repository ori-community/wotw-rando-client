#pragma once
#include <Modloader/app/structs/IntStateMap.h>
#include <Modloader/app/structs/IntStateMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntStateMap {
        inline app::IntStateMap__Class** type_info() {
            static app::IntStateMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntStateMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntStateMap__Class* get_class() {
            return il2cpp::get_class<app::IntStateMap__Class>(type_info(), "", "IntStateMap");
        }
        inline app::IntStateMap* create() {
            return il2cpp::create_object<app::IntStateMap>(get_class());
        }
    } // namespace IntStateMap
} // namespace app::classes::types
