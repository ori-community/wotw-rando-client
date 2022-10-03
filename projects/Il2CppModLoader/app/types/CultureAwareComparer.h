#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CultureAwareComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CultureAwareComparer__Class** type_info;
        inline app::CultureAwareComparer__Class* get_class() {
            return il2cpp::get_class<app::CultureAwareComparer__Class>(type_info, "System", "CultureAwareComparer");
        }
        inline app::CultureAwareComparer* create() {
            return il2cpp::create_object<app::CultureAwareComparer>(get_class());
        }
    } // namespace CultureAwareComparer
} // namespace app::classes::types
