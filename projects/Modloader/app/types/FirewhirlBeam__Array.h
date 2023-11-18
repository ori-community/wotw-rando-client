#pragma once
#include <Modloader/app/structs/FirewhirlBeam__Array.h>
#include <Modloader/app/structs/FirewhirlBeam__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FirewhirlBeam__Array {
        inline app::FirewhirlBeam__Array__Class** type_info() {
            static app::FirewhirlBeam__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FirewhirlBeam__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FirewhirlBeam__Array__Class* get_class() {
            return il2cpp::get_class<app::FirewhirlBeam__Array__Class>(type_info(), "", "FirewhirlBeam[]");
        }
        inline app::FirewhirlBeam__Array* create() {
            return il2cpp::create_object<app::FirewhirlBeam__Array>(get_class());
        }
    } // namespace FirewhirlBeam__Array
} // namespace app::classes::types
