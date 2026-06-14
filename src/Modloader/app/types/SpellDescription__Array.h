#pragma once
#include <Modloader/app/structs/SpellDescription__Array.h>
#include <Modloader/app/structs/SpellDescription__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellDescription__Array {
        inline app::SpellDescription__Array__Class** type_info() {
            static app::SpellDescription__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellDescription__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellDescription__Array__Class* get_class() {
            return il2cpp::get_class<app::SpellDescription__Array__Class>(type_info(), "", "SpellDescription[]");
        }
        inline app::SpellDescription__Array* create() {
            return il2cpp::create_object<app::SpellDescription__Array>(get_class());
        }
    } // namespace SpellDescription__Array
} // namespace app::classes::types
