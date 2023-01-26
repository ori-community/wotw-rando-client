#pragma once
#include <Modloader/app/structs/DelayedAction__Array.h>
#include <Modloader/app/structs/DelayedAction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelayedAction__Array {
        inline app::DelayedAction__Array__Class** type_info() {
            static app::DelayedAction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DelayedAction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DelayedAction__Array__Class* get_class() {
            return il2cpp::get_class<app::DelayedAction__Array__Class>(type_info(), "", "DelayedAction[]");
        }
        inline app::DelayedAction__Array* create() {
            return il2cpp::create_object<app::DelayedAction__Array>(get_class());
        }
    } // namespace DelayedAction__Array
} // namespace app::classes::types
