#pragma once
#include <Modloader/app/structs/StateChangeDefinition.h>
#include <Modloader/app/structs/StateChangeDefinition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateChangeDefinition {
        inline app::StateChangeDefinition__Class** type_info() {
            static app::StateChangeDefinition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateChangeDefinition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateChangeDefinition__Class* get_class() {
            return il2cpp::get_class<app::StateChangeDefinition__Class>(type_info(), "", "StateChangeDefinition");
        }
        inline app::StateChangeDefinition* create() {
            return il2cpp::create_object<app::StateChangeDefinition>(get_class());
        }
    } // namespace StateChangeDefinition
} // namespace app::classes::types
