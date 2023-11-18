#pragma once
#include <Modloader/app/structs/Int2__Array.h>
#include <Modloader/app/structs/Int2__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int2__Array {
        inline app::Int2__Array__Class** type_info() {
            static app::Int2__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Int2__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Int2__Array__Class* get_class() {
            return il2cpp::get_class<app::Int2__Array__Class>(type_info(), "Swing", "Int2[]");
        }
        inline app::Int2__Array* create() {
            return il2cpp::create_object<app::Int2__Array>(get_class());
        }
    } // namespace Int2__Array
} // namespace app::classes::types
