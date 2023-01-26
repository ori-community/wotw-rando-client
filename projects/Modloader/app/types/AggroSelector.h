#pragma once
#include <Modloader/app/structs/AggroSelector.h>
#include <Modloader/app/structs/AggroSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AggroSelector {
        inline app::AggroSelector__Class** type_info() {
            static app::AggroSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AggroSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AggroSelector__Class* get_class() {
            return il2cpp::get_class<app::AggroSelector__Class>(type_info(), "", "AggroSelector");
        }
        inline app::AggroSelector* create() {
            return il2cpp::create_object<app::AggroSelector>(get_class());
        }
    } // namespace AggroSelector
} // namespace app::classes::types
