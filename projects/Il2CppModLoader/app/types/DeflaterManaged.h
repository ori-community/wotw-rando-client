#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflaterManaged {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflaterManaged__Class** type_info;
        inline app::DeflaterManaged__Class* get_class() {
            return il2cpp::get_class<app::DeflaterManaged__Class>(type_info, "Unity.IO.Compression", "DeflaterManaged");
        }
        inline app::DeflaterManaged* create() {
            return il2cpp::create_object<app::DeflaterManaged>(get_class());
        }
    } // namespace DeflaterManaged
} // namespace app::classes::types
