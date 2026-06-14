#pragma once
#include <Modloader/app/structs/Mine__Array.h>
#include <Modloader/app/structs/Mine__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Mine__Array {
        inline app::Mine__Array__Class** type_info() {
            static app::Mine__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Mine__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Mine__Array__Class* get_class() {
            return il2cpp::get_class<app::Mine__Array__Class>(type_info(), "", "Mine[]");
        }
        inline app::Mine__Array* create() {
            return il2cpp::create_object<app::Mine__Array>(get_class());
        }
    } // namespace Mine__Array
} // namespace app::classes::types
