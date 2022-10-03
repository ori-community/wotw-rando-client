#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rope {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Rope__Class** type_info;
        inline app::Rope__Class* get_class() {
            return il2cpp::get_class<app::Rope__Class>(type_info, "", "Rope");
        }
        inline app::Rope* create() {
            return il2cpp::create_object<app::Rope>(get_class());
        }
    } // namespace Rope
} // namespace app::classes::types
