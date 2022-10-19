#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FirewhirlBeamSpawner_c {
        inline app::FirewhirlBeamSpawner_c__Class** type_info = (app::FirewhirlBeamSpawner_c__Class**)(modloader::win::memory::resolve_rva(0x04726068));
        inline app::FirewhirlBeamSpawner_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FirewhirlBeamSpawner_c__Class>(type_info, "", "FirewhirlBeamSpawner", "<>c");
        }
        inline app::FirewhirlBeamSpawner_c* create() {
            return il2cpp::create_object<app::FirewhirlBeamSpawner_c>(get_class());
        }
    } // namespace FirewhirlBeamSpawner_c
} // namespace app::classes::types
