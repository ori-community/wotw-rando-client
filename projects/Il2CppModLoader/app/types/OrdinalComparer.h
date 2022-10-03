#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrdinalComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrdinalComparer__Class** type_info;
        inline app::OrdinalComparer__Class* get_class() {
            return il2cpp::get_class<app::OrdinalComparer__Class>(type_info, "System", "OrdinalComparer");
        }
        inline app::OrdinalComparer* create() {
            return il2cpp::create_object<app::OrdinalComparer>(get_class());
        }
    } // namespace OrdinalComparer
} // namespace app::classes::types
