#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRecorderShot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRecorderShot__Class** type_info;
        inline app::IRecorderShot__Class* get_class() {
            return il2cpp::get_class<app::IRecorderShot__Class>(type_info, "Moon.ContinuousIntegration", "IRecorderShot");
        }
        inline app::IRecorderShot* create() {
            return il2cpp::create_object<app::IRecorderShot>(get_class());
        }
    } // namespace IRecorderShot
} // namespace app::classes::types
