#pragma once
#include <Modloader/app/structs/Quest__Array.h>
#include <Modloader/app/structs/Quest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Quest__Array {
        inline app::Quest__Array__Class** type_info() {
            static app::Quest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Quest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Quest__Array__Class* get_class() {
            return il2cpp::get_class<app::Quest__Array__Class>(type_info(), "", "Quest[]");
        }
        inline app::Quest__Array* create() {
            return il2cpp::create_object<app::Quest__Array>(get_class());
        }
    } // namespace Quest__Array
} // namespace app::classes::types
