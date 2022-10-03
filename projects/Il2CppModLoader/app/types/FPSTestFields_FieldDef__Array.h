#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSTestFields_FieldDef__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FPSTestFields_FieldDef__Array__Class** type_info;
        inline app::FPSTestFields_FieldDef__Array__Class* get_class() {
            return il2cpp::get_class<app::FPSTestFields_FieldDef__Array__Class>(type_info, "", "FPSTestFields+FieldDef[]");
        }
        inline app::FPSTestFields_FieldDef__Array* create() {
            return il2cpp::create_object<app::FPSTestFields_FieldDef__Array>(get_class());
        }
    } // namespace FPSTestFields_FieldDef__Array
} // namespace app::classes::types
