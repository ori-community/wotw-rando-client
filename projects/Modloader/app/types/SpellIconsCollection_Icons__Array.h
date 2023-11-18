#pragma once
#include <Modloader/app/structs/SpellIconsCollection_Icons__Array.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellIconsCollection_Icons__Array {
        inline app::SpellIconsCollection_Icons__Array__Class** type_info() {
            static app::SpellIconsCollection_Icons__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellIconsCollection_Icons__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellIconsCollection_Icons__Array__Class* get_class() {
            return il2cpp::get_class<app::SpellIconsCollection_Icons__Array__Class>(type_info(), "", "SpellIconsCollection+Icons[]");
        }
        inline app::SpellIconsCollection_Icons__Array* create() {
            return il2cpp::create_object<app::SpellIconsCollection_Icons__Array>(get_class());
        }
    } // namespace SpellIconsCollection_Icons__Array
} // namespace app::classes::types
