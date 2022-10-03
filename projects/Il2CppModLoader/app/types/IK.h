#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IK {
        namespace {
            app::IK__Class* type_info_ref = nullptr;
        }
        app::IK__Class** type_info = &type_info_ref;
        inline app::IK__Class* get_class() {
            return il2cpp::get_class<app::IK__Class>(type_info, "RootMotion.FinalIK", "IK");
        }
        inline app::IK* create() {
            return il2cpp::create_object<app::IK>(get_class());
        }
        inline app::IK__Array* create_array(int size) {
            return il2cpp::array_new<app::IK__Array>(get_class(), size);
        }
    } // namespace IK
} // namespace app::classes::types
