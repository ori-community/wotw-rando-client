#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FirewhirlBeamSpawner__Array {
        namespace {
            inline app::FirewhirlBeamSpawner__Array__Class* type_info_ref = nullptr;
        }
        inline app::FirewhirlBeamSpawner__Array__Class** type_info = &type_info_ref;
        inline app::FirewhirlBeamSpawner__Array__Class* get_class() {
            return il2cpp::get_class<app::FirewhirlBeamSpawner__Array__Class>(type_info, "", "FirewhirlBeamSpawner[]");
        }
        inline app::FirewhirlBeamSpawner__Array* create() {
            return il2cpp::create_object<app::FirewhirlBeamSpawner__Array>(get_class());
        }
    } // namespace FirewhirlBeamSpawner__Array
} // namespace app::classes::types
