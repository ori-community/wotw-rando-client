#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKConstraintBend {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKConstraintBend__Class** type_info;
        inline app::IKConstraintBend__Class* get_class() {
            return il2cpp::get_class<app::IKConstraintBend__Class>(type_info, "RootMotion.FinalIK", "IKConstraintBend");
        }
        inline app::IKConstraintBend* create() {
            return il2cpp::create_object<app::IKConstraintBend>(get_class());
        }
    } // namespace IKConstraintBend
} // namespace app::classes::types
