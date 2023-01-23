#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FirewhirlBeam__Class.h>
#include <Modloader/app/structs/FirewhirlBeam.h>
#include <Modloader/app/structs/FirewhirlBeam__Array.h>

namespace app::classes::types {
    namespace FirewhirlBeam {
        namespace {
            inline app::FirewhirlBeam__Class* type_info_ref = nullptr;
        }
        inline app::FirewhirlBeam__Class** type_info = &type_info_ref;
        inline app::FirewhirlBeam__Class* get_class() {
            return il2cpp::get_class<app::FirewhirlBeam__Class>(type_info, "", "FirewhirlBeam");
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
