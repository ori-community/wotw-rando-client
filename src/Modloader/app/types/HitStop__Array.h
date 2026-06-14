#pragma once
#include <Modloader/app/structs/HitStop__Array.h>
#include <Modloader/app/structs/HitStop__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitStop__Array {
        inline app::HitStop__Array__Class** type_info() {
            static app::HitStop__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitStop__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitStop__Array__Class* get_class() {
            return il2cpp::get_class<app::HitStop__Array__Class>(type_info(), "Moon", "HitStop[]");
        }
        inline app::HitStop__Array* create() {
            return il2cpp::create_object<app::HitStop__Array>(get_class());
        }
    } // namespace HitStop__Array
} // namespace app::classes::types
