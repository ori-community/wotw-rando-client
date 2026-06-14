#pragma once
#include <Modloader/app/structs/FirewhirlBeamSpawner__Array.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FirewhirlBeamSpawner__Array {
        inline app::FirewhirlBeamSpawner__Array__Class** type_info() {
            static app::FirewhirlBeamSpawner__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FirewhirlBeamSpawner__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FirewhirlBeamSpawner__Array__Class* get_class() {
            return il2cpp::get_class<app::FirewhirlBeamSpawner__Array__Class>(type_info(), "", "FirewhirlBeamSpawner[]");
        }
        inline app::FirewhirlBeamSpawner__Array* create() {
            return il2cpp::create_object<app::FirewhirlBeamSpawner__Array>(get_class());
        }
    } // namespace FirewhirlBeamSpawner__Array
} // namespace app::classes::types
