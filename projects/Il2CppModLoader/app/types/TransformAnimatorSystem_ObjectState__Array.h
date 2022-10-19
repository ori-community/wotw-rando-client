#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_ObjectState__Array {
        namespace {
            inline app::TransformAnimatorSystem_ObjectState__Array__Class* type_info_ref = nullptr;
        }
        inline app::TransformAnimatorSystem_ObjectState__Array__Class** type_info = &type_info_ref;
        inline app::TransformAnimatorSystem_ObjectState__Array__Class* get_class() {
            return il2cpp::get_class<app::TransformAnimatorSystem_ObjectState__Array__Class>(type_info, "Moon.Timeline", "TransformAnimatorSystem+ObjectState[]");
        }
        inline app::TransformAnimatorSystem_ObjectState__Array* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem_ObjectState__Array>(get_class());
        }
    } // namespace TransformAnimatorSystem_ObjectState__Array
} // namespace app::classes::types
