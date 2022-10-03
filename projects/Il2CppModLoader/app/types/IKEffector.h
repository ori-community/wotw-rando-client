#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKEffector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKEffector__Class** type_info;
        inline app::IKEffector__Class* get_class() {
            return il2cpp::get_class<app::IKEffector__Class>(type_info, "RootMotion.FinalIK", "IKEffector");
        }
        inline app::IKEffector* create() {
            return il2cpp::create_object<app::IKEffector>(get_class());
        }
        inline app::IKEffector__Array* create_array(int size) {
            return il2cpp::array_new<app::IKEffector__Array>(get_class(), size);
        }
    } // namespace IKEffector
} // namespace app::classes::types
