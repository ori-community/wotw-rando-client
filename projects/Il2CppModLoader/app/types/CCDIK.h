#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCDIK {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCDIK__Class** type_info;
        inline app::CCDIK__Class* get_class() {
            return il2cpp::get_class<app::CCDIK__Class>(type_info, "RootMotion.FinalIK", "CCDIK");
        }
        inline app::CCDIK* create() {
            return il2cpp::create_object<app::CCDIK>(get_class());
        }
    } // namespace CCDIK
} // namespace app::classes::types
