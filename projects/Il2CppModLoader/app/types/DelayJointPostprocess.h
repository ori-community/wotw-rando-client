#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelayJointPostprocess {
        namespace {
            app::DelayJointPostprocess__Class* type_info_ref = nullptr;
        }
        app::DelayJointPostprocess__Class** type_info = &type_info_ref;
        inline app::DelayJointPostprocess__Class* get_class() {
            return il2cpp::get_class<app::DelayJointPostprocess__Class>(type_info, "Moon.Animation", "DelayJointPostprocess");
        }
        inline app::DelayJointPostprocess* create() {
            return il2cpp::create_object<app::DelayJointPostprocess>(get_class());
        }
    } // namespace DelayJointPostprocess
} // namespace app::classes::types
