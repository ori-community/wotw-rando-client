#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FullBodyBipedIK {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FullBodyBipedIK__Class** type_info;
        inline app::FullBodyBipedIK__Class* get_class() {
            return il2cpp::get_class<app::FullBodyBipedIK__Class>(type_info, "RootMotion.FinalIK", "FullBodyBipedIK");
        }
        inline app::FullBodyBipedIK* create() {
            return il2cpp::create_object<app::FullBodyBipedIK>(get_class());
        }
    } // namespace FullBodyBipedIK
} // namespace app::classes::types
