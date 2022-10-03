#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrounderBipedIK {
        namespace {
            app::GrounderBipedIK__Class* type_info_ref = nullptr;
        }
        app::GrounderBipedIK__Class** type_info = &type_info_ref;
        inline app::GrounderBipedIK__Class* get_class() {
            return il2cpp::get_class<app::GrounderBipedIK__Class>(type_info, "RootMotion.FinalIK", "GrounderBipedIK");
        }
        inline app::GrounderBipedIK* create() {
            return il2cpp::create_object<app::GrounderBipedIK>(get_class());
        }
    } // namespace GrounderBipedIK
} // namespace app::classes::types
