#pragma once
#include <Modloader/app/structs/FlammablesStateCondition.h>
#include <Modloader/app/structs/FlammablesStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlammablesStateCondition {
        inline app::FlammablesStateCondition__Class** type_info() {
            static app::FlammablesStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlammablesStateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlammablesStateCondition__Class* get_class() {
            return il2cpp::get_class<app::FlammablesStateCondition__Class>(type_info(), "", "FlammablesStateCondition");
        }
        inline app::FlammablesStateCondition* create() {
            return il2cpp::create_object<app::FlammablesStateCondition>(get_class());
        }
    } // namespace FlammablesStateCondition
} // namespace app::classes::types
