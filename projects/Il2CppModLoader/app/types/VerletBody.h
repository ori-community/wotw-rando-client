#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletBody {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletBody__Class** type_info;
        inline app::VerletBody__Class* get_class() {
            return il2cpp::get_class<app::VerletBody__Class>(type_info, "Moon", "VerletBody");
        }
        inline app::VerletBody* create() {
            return il2cpp::create_object<app::VerletBody>(get_class());
        }
    } // namespace VerletBody
} // namespace app::classes::types
