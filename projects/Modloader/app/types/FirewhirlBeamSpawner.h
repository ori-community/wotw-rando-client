#pragma once
#include <Modloader/app/structs/FirewhirlBeamSpawner.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner__Array.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FirewhirlBeamSpawner {
        inline app::FirewhirlBeamSpawner__Class** type_info() {
            static app::FirewhirlBeamSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FirewhirlBeamSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FirewhirlBeamSpawner__Class* get_class() {
            return il2cpp::get_class<app::FirewhirlBeamSpawner__Class>(type_info(), "", "FirewhirlBeamSpawner");
        }
        inline app::FirewhirlBeamSpawner* create() {
            return il2cpp::create_object<app::FirewhirlBeamSpawner>(get_class());
        }
        inline app::FirewhirlBeamSpawner__Array* create_array(int size) {
            return il2cpp::array_new<app::FirewhirlBeamSpawner__Array>(get_class(), size);
        }
        inline app::FirewhirlBeamSpawner__Array* create_array(const std::vector<app::FirewhirlBeamSpawner*>& items) {
            return il2cpp::array_new<app::FirewhirlBeamSpawner__Array>(get_class(), items);
        }
    } // namespace FirewhirlBeamSpawner
} // namespace app::classes::types
