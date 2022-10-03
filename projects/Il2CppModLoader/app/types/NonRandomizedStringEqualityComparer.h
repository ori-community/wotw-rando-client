#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NonRandomizedStringEqualityComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NonRandomizedStringEqualityComparer__Class** type_info;
        inline app::NonRandomizedStringEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::NonRandomizedStringEqualityComparer__Class>(type_info, "System.Collections.Generic", "NonRandomizedStringEqualityComparer");
        }
        inline app::NonRandomizedStringEqualityComparer* create() {
            return il2cpp::create_object<app::NonRandomizedStringEqualityComparer>(get_class());
        }
    } // namespace NonRandomizedStringEqualityComparer
} // namespace app::classes::types
