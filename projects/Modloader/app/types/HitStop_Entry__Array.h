#pragma once
#include <Modloader/app/structs/HitStop_Entry__Array.h>
#include <Modloader/app/structs/HitStop_Entry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitStop_Entry__Array {
        inline app::HitStop_Entry__Array__Class** type_info() {
            static app::HitStop_Entry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitStop_Entry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitStop_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::HitStop_Entry__Array__Class>(type_info(), "Moon", "HitStop+Entry[]");
        }
        inline app::HitStop_Entry__Array* create() {
            return il2cpp::create_object<app::HitStop_Entry__Array>(get_class());
        }
    } // namespace HitStop_Entry__Array
} // namespace app::classes::types
