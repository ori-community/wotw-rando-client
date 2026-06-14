#pragma once
#include <Modloader/app/structs/ActionSequence__Array.h>
#include <Modloader/app/structs/ActionSequence__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionSequence__Array {
        inline app::ActionSequence__Array__Class** type_info() {
            static app::ActionSequence__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionSequence__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionSequence__Array__Class* get_class() {
            return il2cpp::get_class<app::ActionSequence__Array__Class>(type_info(), "", "ActionSequence[]");
        }
        inline app::ActionSequence__Array* create() {
            return il2cpp::create_object<app::ActionSequence__Array>(get_class());
        }
    } // namespace ActionSequence__Array
} // namespace app::classes::types
