#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LimbIK {
        namespace {
            inline app::LimbIK__Class* type_info_ref = nullptr;
        }
        inline app::LimbIK__Class** type_info = &type_info_ref;
        inline app::LimbIK__Class* get_class() {
            return il2cpp::get_class<app::LimbIK__Class>(type_info, "RootMotion.FinalIK", "LimbIK");
        }
        inline app::LimbIK* create() {
            return il2cpp::create_object<app::LimbIK>(get_class());
        }
    } // namespace LimbIK
} // namespace app::classes::types
