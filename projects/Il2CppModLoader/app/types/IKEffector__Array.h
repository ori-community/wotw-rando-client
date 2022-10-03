#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKEffector__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKEffector__Array__Class** type_info;
        inline app::IKEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::IKEffector__Array__Class>(type_info, "RootMotion.FinalIK", "IKEffector[]");
        }
        inline app::IKEffector__Array* create() {
            return il2cpp::create_object<app::IKEffector__Array>(get_class());
        }
    } // namespace IKEffector__Array
} // namespace app::classes::types
