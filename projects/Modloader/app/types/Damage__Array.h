#pragma once
#include <Modloader/app/structs/Damage__Array.h>
#include <Modloader/app/structs/Damage__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Damage__Array {
        inline app::Damage__Array__Class** type_info() {
            static app::Damage__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Damage__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Damage__Array__Class* get_class() {
            return il2cpp::get_class<app::Damage__Array__Class>(type_info(), "", "Damage[]");
        }
        inline app::Damage__Array* create() {
            return il2cpp::create_object<app::Damage__Array>(get_class());
        }
    } // namespace Damage__Array
} // namespace app::classes::types
