#pragma once
#include <Modloader/app/structs/ClipAnimation__Array.h>
#include <Modloader/app/structs/ClipAnimation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClipAnimation__Array {
        inline app::ClipAnimation__Array__Class** type_info() {
            static app::ClipAnimation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClipAnimation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClipAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::ClipAnimation__Array__Class>(type_info(), "Moon", "ClipAnimation[]");
        }
        inline app::ClipAnimation__Array* create() {
            return il2cpp::create_object<app::ClipAnimation__Array>(get_class());
        }
    } // namespace ClipAnimation__Array
} // namespace app::classes::types
