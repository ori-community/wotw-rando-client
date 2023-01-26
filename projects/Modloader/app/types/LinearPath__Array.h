#pragma once
#include <Modloader/app/structs/LinearPath__Array.h>
#include <Modloader/app/structs/LinearPath__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinearPath__Array {
        inline app::LinearPath__Array__Class** type_info() {
            static app::LinearPath__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LinearPath__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LinearPath__Array__Class* get_class() {
            return il2cpp::get_class<app::LinearPath__Array__Class>(type_info(), "", "LinearPath[]");
        }
        inline app::LinearPath__Array* create() {
            return il2cpp::create_object<app::LinearPath__Array>(get_class());
        }
    } // namespace LinearPath__Array
} // namespace app::classes::types
