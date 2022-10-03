#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContractionComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContractionComparer__Class** type_info;
        inline app::ContractionComparer__Class* get_class() {
            return il2cpp::get_class<app::ContractionComparer__Class>(type_info, "Mono.Globalization.Unicode", "ContractionComparer");
        }
        inline app::ContractionComparer* create() {
            return il2cpp::create_object<app::ContractionComparer>(get_class());
        }
    } // namespace ContractionComparer
} // namespace app::classes::types
