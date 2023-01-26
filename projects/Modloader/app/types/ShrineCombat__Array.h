#pragma once
#include <Modloader/app/structs/ShrineCombat__Array.h>
#include <Modloader/app/structs/ShrineCombat__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat__Array {
        inline app::ShrineCombat__Array__Class** type_info() {
            static app::ShrineCombat__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShrineCombat__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShrineCombat__Array__Class* get_class() {
            return il2cpp::get_class<app::ShrineCombat__Array__Class>(type_info(), "", "ShrineCombat[]");
        }
        inline app::ShrineCombat__Array* create() {
            return il2cpp::create_object<app::ShrineCombat__Array>(get_class());
        }
    } // namespace ShrineCombat__Array
} // namespace app::classes::types
