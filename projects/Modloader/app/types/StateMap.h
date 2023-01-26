#pragma once
#include <Modloader/app/structs/StateMap.h>
#include <Modloader/app/structs/StateMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMap {
        inline app::StateMap__Class** type_info() {
            static app::StateMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateMap__Class* get_class() {
            return il2cpp::get_class<app::StateMap__Class>(type_info(), "", "StateMap");
        }
        inline app::StateMap* create() {
            return il2cpp::create_object<app::StateMap>(get_class());
        }
    } // namespace StateMap
} // namespace app::classes::types
