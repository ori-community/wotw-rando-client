#pragma once
#include <Modloader/app/structs/WormHole__Array.h>
#include <Modloader/app/structs/WormHole__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormHole__Array {
        inline app::WormHole__Array__Class** type_info() {
            static app::WormHole__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WormHole__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WormHole__Array__Class* get_class() {
            return il2cpp::get_class<app::WormHole__Array__Class>(type_info(), "", "WormHole[]");
        }
        inline app::WormHole__Array* create() {
            return il2cpp::create_object<app::WormHole__Array>(get_class());
        }
    } // namespace WormHole__Array
} // namespace app::classes::types
