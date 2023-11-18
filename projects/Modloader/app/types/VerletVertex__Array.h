#pragma once
#include <Modloader/app/structs/VerletVertex__Array.h>
#include <Modloader/app/structs/VerletVertex__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletVertex__Array {
        inline app::VerletVertex__Array__Class** type_info() {
            static app::VerletVertex__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletVertex__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletVertex__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletVertex__Array__Class>(type_info(), "", "VerletVertex[]");
        }
        inline app::VerletVertex__Array* create() {
            return il2cpp::create_object<app::VerletVertex__Array>(get_class());
        }
    } // namespace VerletVertex__Array
} // namespace app::classes::types
