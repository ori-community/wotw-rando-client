#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IK__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IK__Array__Class** type_info;
        inline app::IK__Array__Class* get_class() {
            return il2cpp::get_class<app::IK__Array__Class>(type_info, "RootMotion.FinalIK", "IK[]");
        }
        inline app::IK__Array* create() {
            return il2cpp::create_object<app::IK__Array>(get_class());
        }
    } // namespace IK__Array
} // namespace app::classes::types
