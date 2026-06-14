#pragma once
#include <Modloader/app/structs/MaterialVFXSet__Array.h>
#include <Modloader/app/structs/MaterialVFXSet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialVFXSet__Array {
        inline app::MaterialVFXSet__Array__Class** type_info() {
            static app::MaterialVFXSet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialVFXSet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialVFXSet__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXSet__Array__Class>(type_info(), "", "MaterialVFXSet[]");
        }
        inline app::MaterialVFXSet__Array* create() {
            return il2cpp::create_object<app::MaterialVFXSet__Array>(get_class());
        }
    } // namespace MaterialVFXSet__Array
} // namespace app::classes::types
