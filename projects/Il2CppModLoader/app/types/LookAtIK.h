#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LookAtIK {
        namespace {
            app::LookAtIK__Class* type_info_ref = nullptr;
        }
        app::LookAtIK__Class** type_info = &type_info_ref;
        inline app::LookAtIK__Class* get_class() {
            return il2cpp::get_class<app::LookAtIK__Class>(type_info, "RootMotion.FinalIK", "LookAtIK");
        }
        inline app::LookAtIK* create() {
            return il2cpp::create_object<app::LookAtIK>(get_class());
        }
    } // namespace LookAtIK
} // namespace app::classes::types
