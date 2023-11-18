#pragma once
#include <Modloader/app/structs/TrailerShot__Array.h>
#include <Modloader/app/structs/TrailerShot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrailerShot__Array {
        inline app::TrailerShot__Array__Class** type_info() {
            static app::TrailerShot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrailerShot__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrailerShot__Array__Class* get_class() {
            return il2cpp::get_class<app::TrailerShot__Array__Class>(type_info(), "", "TrailerShot[]");
        }
        inline app::TrailerShot__Array* create() {
            return il2cpp::create_object<app::TrailerShot__Array>(get_class());
        }
    } // namespace TrailerShot__Array
} // namespace app::classes::types
