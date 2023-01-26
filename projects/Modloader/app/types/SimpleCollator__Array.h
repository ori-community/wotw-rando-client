#pragma once
#include <Modloader/app/structs/SimpleCollator__Array.h>
#include <Modloader/app/structs/SimpleCollator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleCollator__Array {
        inline app::SimpleCollator__Array__Class** type_info() {
            static app::SimpleCollator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleCollator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleCollator__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleCollator__Array__Class>(type_info(), "Mono.Globalization.Unicode", "SimpleCollator[]");
        }
        inline app::SimpleCollator__Array* create() {
            return il2cpp::create_object<app::SimpleCollator__Array>(get_class());
        }
    } // namespace SimpleCollator__Array
} // namespace app::classes::types
