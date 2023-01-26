#pragma once
#include <Modloader/app/structs/Portal__Array.h>
#include <Modloader/app/structs/Portal__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Portal__Array {
        inline app::Portal__Array__Class** type_info() {
            static app::Portal__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Portal__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Portal__Array__Class* get_class() {
            return il2cpp::get_class<app::Portal__Array__Class>(type_info(), "", "Portal[]");
        }
        inline app::Portal__Array* create() {
            return il2cpp::create_object<app::Portal__Array>(get_class());
        }
    } // namespace Portal__Array
} // namespace app::classes::types
