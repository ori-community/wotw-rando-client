#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKConstraintBend {
        inline app::IKConstraintBend__Class** type_info = (app::IKConstraintBend__Class**)(modloader::win::memory::resolve_rva(0x047654C8));
        inline app::IKConstraintBend__Class* get_class() {
            return il2cpp::get_class<app::IKConstraintBend__Class>(type_info, "RootMotion.FinalIK", "IKConstraintBend");
        }
        inline app::IKConstraintBend* create() {
            return il2cpp::create_object<app::IKConstraintBend>(get_class());
        }
    } // namespace IKConstraintBend
} // namespace app::classes::types
