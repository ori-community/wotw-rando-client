#pragma once
#include <Modloader/app/structs/DropPickup__Array.h>
#include <Modloader/app/structs/DropPickup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropPickup__Array {
        inline app::DropPickup__Array__Class** type_info() {
            static app::DropPickup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropPickup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropPickup__Array__Class* get_class() {
            return il2cpp::get_class<app::DropPickup__Array__Class>(type_info(), "", "DropPickup[]");
        }
        inline app::DropPickup__Array* create() {
            return il2cpp::create_object<app::DropPickup__Array>(get_class());
        }
    } // namespace DropPickup__Array
} // namespace app::classes::types
