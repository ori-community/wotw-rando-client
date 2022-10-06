#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FirewhirlBeamSpawner {
        namespace {
            app::FirewhirlBeamSpawner__Class* type_info_ref = nullptr;
        }
        app::FirewhirlBeamSpawner__Class** type_info = &type_info_ref;
        inline app::FirewhirlBeamSpawner__Class* get_class() {
            return il2cpp::get_class<app::FirewhirlBeamSpawner__Class>(type_info, "", "FirewhirlBeamSpawner");
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
