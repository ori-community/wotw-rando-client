#pragma once
#include <Modloader/app/structs/OverridableColorProperty__Array.h>
#include <Modloader/app/structs/OverridableColorProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OverridableColorProperty__Array {
        inline app::OverridableColorProperty__Array__Class** type_info() {
            static app::OverridableColorProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OverridableColorProperty__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OverridableColorProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::OverridableColorProperty__Array__Class>(type_info(), "", "OverridableColorProperty[]");
        }
        inline app::OverridableColorProperty__Array* create() {
            return il2cpp::create_object<app::OverridableColorProperty__Array>(get_class());
        }
    } // namespace OverridableColorProperty__Array
} // namespace app::classes::types
