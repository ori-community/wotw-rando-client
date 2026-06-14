#pragma once
#include <Modloader/app/structs/VerletBody_Point__Array.h>
#include <Modloader/app/structs/VerletBody_Point__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBody_Point__Array {
        inline app::VerletBody_Point__Array__Class** type_info() {
            static app::VerletBody_Point__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletBody_Point__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletBody_Point__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBody_Point__Array__Class>(type_info(), "Moon", "VerletBody+Point[]");
        }
        inline app::VerletBody_Point__Array* create() {
            return il2cpp::create_object<app::VerletBody_Point__Array>(get_class());
        }
    } // namespace VerletBody_Point__Array
} // namespace app::classes::types
