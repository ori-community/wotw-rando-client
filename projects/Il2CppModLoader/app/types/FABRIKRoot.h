#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FABRIKRoot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FABRIKRoot__Class** type_info;
        inline app::FABRIKRoot__Class* get_class() {
            return il2cpp::get_class<app::FABRIKRoot__Class>(type_info, "RootMotion.FinalIK", "FABRIKRoot");
        }
        inline app::FABRIKRoot* create() {
            return il2cpp::create_object<app::FABRIKRoot>(get_class());
        }
    } // namespace FABRIKRoot
} // namespace app::classes::types
