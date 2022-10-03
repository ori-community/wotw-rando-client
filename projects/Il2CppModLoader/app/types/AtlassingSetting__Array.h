#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AtlassingSetting__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AtlassingSetting__Array__Class** type_info;
        inline app::AtlassingSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::AtlassingSetting__Array__Class>(type_info, "", "AtlassingSetting[]");
        }
        inline app::AtlassingSetting__Array* create() {
            return il2cpp::create_object<app::AtlassingSetting__Array>(get_class());
        }
    } // namespace AtlassingSetting__Array
} // namespace app::classes::types
