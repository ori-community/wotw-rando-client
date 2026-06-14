#pragma once
#include <Modloader/app/structs/TransformAnimatorSystem_ObjectState__Array.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ObjectState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_ObjectState__Array {
        inline app::TransformAnimatorSystem_ObjectState__Array__Class** type_info() {
            static app::TransformAnimatorSystem_ObjectState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformAnimatorSystem_ObjectState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformAnimatorSystem_ObjectState__Array__Class* get_class() {
            return il2cpp::get_class<app::TransformAnimatorSystem_ObjectState__Array__Class>(type_info(), "Moon.Timeline", "TransformAnimatorSystem+ObjectState[]");
        }
        inline app::TransformAnimatorSystem_ObjectState__Array* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem_ObjectState__Array>(get_class());
        }
    } // namespace TransformAnimatorSystem_ObjectState__Array
} // namespace app::classes::types
