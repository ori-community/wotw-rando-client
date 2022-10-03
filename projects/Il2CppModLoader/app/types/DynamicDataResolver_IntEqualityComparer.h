#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicDataResolver_IntEqualityComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicDataResolver_IntEqualityComparer__Class** type_info;
        inline app::DynamicDataResolver_IntEqualityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataResolver_IntEqualityComparer__Class>(type_info, "Moon", "DynamicDataResolver", "IntEqualityComparer");
        }
        inline app::DynamicDataResolver_IntEqualityComparer* create() {
            return il2cpp::create_object<app::DynamicDataResolver_IntEqualityComparer>(get_class());
        }
    } // namespace DynamicDataResolver_IntEqualityComparer
} // namespace app::classes::types
