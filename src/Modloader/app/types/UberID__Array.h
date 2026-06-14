#pragma once
#include <Modloader/app/structs/UberID__Array.h>
#include <Modloader/app/structs/UberID__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberID__Array {
        inline app::UberID__Array__Class** type_info() {
            static app::UberID__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberID__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberID__Array__Class* get_class() {
            return il2cpp::get_class<app::UberID__Array__Class>(type_info(), "Moon", "UberID[]");
        }
        inline app::UberID__Array* create() {
            return il2cpp::create_object<app::UberID__Array>(get_class());
        }
    } // namespace UberID__Array
} // namespace app::classes::types
