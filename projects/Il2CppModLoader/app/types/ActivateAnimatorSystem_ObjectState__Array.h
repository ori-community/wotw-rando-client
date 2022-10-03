#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateAnimatorSystem_ObjectState__Array {
        namespace {
            app::ActivateAnimatorSystem_ObjectState__Array__Class* type_info_ref = nullptr;
        }
        app::ActivateAnimatorSystem_ObjectState__Array__Class** type_info = &type_info_ref;
        inline app::ActivateAnimatorSystem_ObjectState__Array__Class* get_class() {
            return il2cpp::get_class<app::ActivateAnimatorSystem_ObjectState__Array__Class>(type_info, "Moon.Timeline", "ActivateAnimatorSystem+ObjectState[]");
        }
        inline app::ActivateAnimatorSystem_ObjectState__Array* create() {
            return il2cpp::create_object<app::ActivateAnimatorSystem_ObjectState__Array>(get_class());
        }
    } // namespace ActivateAnimatorSystem_ObjectState__Array
} // namespace app::classes::types
