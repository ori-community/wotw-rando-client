#pragma once
#include <Modloader/app/structs/StateValidator__Array.h>
#include <Modloader/app/structs/StateValidator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateValidator__Array {
        inline app::StateValidator__Array__Class** type_info() {
            static app::StateValidator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateValidator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateValidator__Array__Class* get_class() {
            return il2cpp::get_class<app::StateValidator__Array__Class>(type_info(), "", "StateValidator[]");
        }
        inline app::StateValidator__Array* create() {
            return il2cpp::create_object<app::StateValidator__Array>(get_class());
        }
    } // namespace StateValidator__Array
} // namespace app::classes::types
