#pragma once
#include <Modloader/app/structs/FirewhirlBeam.h>
#include <Modloader/app/structs/FirewhirlBeam__Array.h>
#include <Modloader/app/structs/FirewhirlBeam__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FirewhirlBeam {
        inline app::FirewhirlBeam__Class** type_info() {
            static app::FirewhirlBeam__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FirewhirlBeam__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FirewhirlBeam__Class* get_class() {
            return il2cpp::get_class<app::FirewhirlBeam__Class>(type_info(), "", "FirewhirlBeam");
        }
        inline app::FirewhirlBeam* create() {
            return il2cpp::create_object<app::FirewhirlBeam>(get_class());
        }
        inline app::FirewhirlBeam__Array* create_array(int size) {
            return il2cpp::array_new<app::FirewhirlBeam__Array>(get_class(), size);
        }
        inline app::FirewhirlBeam__Array* create_array(const std::vector<app::FirewhirlBeam*>& items) {
            return il2cpp::array_new<app::FirewhirlBeam__Array>(get_class(), items);
        }
    } // namespace FirewhirlBeam
} // namespace app::classes::types
