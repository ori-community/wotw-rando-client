#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateManager__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateManager__Array__Class** type_info;
        inline app::UpdateManager__Array__Class* get_class() {
            return il2cpp::get_class<app::UpdateManager__Array__Class>(type_info, "Moon.Driver", "UpdateManager[]");
        }
        inline app::UpdateManager__Array* create() {
            return il2cpp::create_object<app::UpdateManager__Array>(get_class());
        }
    } // namespace UpdateManager__Array
} // namespace app::classes::types
