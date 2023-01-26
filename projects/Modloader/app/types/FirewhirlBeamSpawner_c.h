#pragma once
#include <Modloader/app/structs/FirewhirlBeamSpawner_c.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FirewhirlBeamSpawner_c {
        inline app::FirewhirlBeamSpawner_c__Class** type_info() {
            static app::FirewhirlBeamSpawner_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FirewhirlBeamSpawner_c__Class**)(modloader::win::memory::resolve_rva(0x04726068));
            }
            return cache;
        }
        inline app::FirewhirlBeamSpawner_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FirewhirlBeamSpawner_c__Class>(type_info(), "", "FirewhirlBeamSpawner", "<>c");
        }
        inline app::FirewhirlBeamSpawner_c* create() {
            return il2cpp::create_object<app::FirewhirlBeamSpawner_c>(get_class());
        }
    } // namespace FirewhirlBeamSpawner_c
} // namespace app::classes::types
