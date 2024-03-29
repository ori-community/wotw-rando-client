#pragma once
#include <Modloader/app/structs/ActivateAnimatorSystem_ObjectState.h>
#include <Modloader/app/structs/ActivateAnimatorSystem_ObjectState__Array.h>
#include <Modloader/app/structs/ActivateAnimatorSystem_ObjectState__Boxed.h>
#include <Modloader/app/structs/ActivateAnimatorSystem_ObjectState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateAnimatorSystem_ObjectState {
        inline app::ActivateAnimatorSystem_ObjectState__Class** type_info() {
            static app::ActivateAnimatorSystem_ObjectState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateAnimatorSystem_ObjectState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateAnimatorSystem_ObjectState__Class* get_class() {
            return il2cpp::get_nested_class<app::ActivateAnimatorSystem_ObjectState__Class>(type_info(), "Moon.Timeline", "ActivateAnimatorSystem", "ObjectState");
        }
        inline app::ActivateAnimatorSystem_ObjectState* create() {
            return il2cpp::create_object<app::ActivateAnimatorSystem_ObjectState>(get_class());
        }
        inline app::ActivateAnimatorSystem_ObjectState__Boxed* box(app::ActivateAnimatorSystem_ObjectState value) {
            return il2cpp::box_value<app::ActivateAnimatorSystem_ObjectState__Boxed>(get_class(), value);
        }
        inline app::ActivateAnimatorSystem_ObjectState__Array* create_array(int size) {
            return il2cpp::array_new<app::ActivateAnimatorSystem_ObjectState__Array>(get_class(), size);
        }
        inline app::ActivateAnimatorSystem_ObjectState__Array* create_array(const std::vector<app::ActivateAnimatorSystem_ObjectState>& items) {
            return il2cpp::array_new<app::ActivateAnimatorSystem_ObjectState__Array>(get_class(), items);
        }
    } // namespace ActivateAnimatorSystem_ObjectState
} // namespace app::classes::types
