#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BipedIK {
        namespace {
            inline app::BipedIK__Class* type_info_ref = nullptr;
        }
        inline app::BipedIK__Class** type_info = &type_info_ref;
        inline app::BipedIK__Class* get_class() {
            return il2cpp::get_class<app::BipedIK__Class>(type_info, "RootMotion.FinalIK", "BipedIK");
        }
        inline app::BipedIK* create() {
            return il2cpp::create_object<app::BipedIK>(get_class());
        }
    } // namespace BipedIK
} // namespace app::classes::types
