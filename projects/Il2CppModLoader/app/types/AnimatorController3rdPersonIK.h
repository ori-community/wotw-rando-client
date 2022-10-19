#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimatorController3rdPersonIK {
        namespace {
            inline app::AnimatorController3rdPersonIK__Class* type_info_ref = nullptr;
        }
        inline app::AnimatorController3rdPersonIK__Class** type_info = &type_info_ref;
        inline app::AnimatorController3rdPersonIK__Class* get_class() {
            return il2cpp::get_class<app::AnimatorController3rdPersonIK__Class>(type_info, "RootMotion.Demos", "AnimatorController3rdPersonIK");
        }
        inline app::AnimatorController3rdPersonIK* create() {
            return il2cpp::create_object<app::AnimatorController3rdPersonIK>(get_class());
        }
    } // namespace AnimatorController3rdPersonIK
} // namespace app::classes::types
