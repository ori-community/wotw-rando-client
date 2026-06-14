#pragma once
#include <Modloader/app/structs/StateOverrideSystem_IStateOverrideEntry__Array.h>
#include <Modloader/app/structs/StateOverrideSystem_IStateOverrideEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateOverrideSystem_IStateOverrideEntry__Array {
        inline app::StateOverrideSystem_IStateOverrideEntry__Array__Class** type_info() {
            static app::StateOverrideSystem_IStateOverrideEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateOverrideSystem_IStateOverrideEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateOverrideSystem_IStateOverrideEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::StateOverrideSystem_IStateOverrideEntry__Array__Class>(type_info(), "", "StateOverrideSystem+IStateOverrideEntry[]");
        }
        inline app::StateOverrideSystem_IStateOverrideEntry__Array* create() {
            return il2cpp::create_object<app::StateOverrideSystem_IStateOverrideEntry__Array>(get_class());
        }
    } // namespace StateOverrideSystem_IStateOverrideEntry__Array
} // namespace app::classes::types
