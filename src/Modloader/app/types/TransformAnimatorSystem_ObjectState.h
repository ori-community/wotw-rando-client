#pragma once
#include <Modloader/app/structs/TransformAnimatorSystem_ObjectState.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ObjectState__Array.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ObjectState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_ObjectState {
        inline app::TransformAnimatorSystem_ObjectState__Class** type_info() {
            static app::TransformAnimatorSystem_ObjectState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransformAnimatorSystem_ObjectState__Class**)(modloader::win::memory::resolve_rva(0x04752DC8));
            }
            return cache;
        }
        inline app::TransformAnimatorSystem_ObjectState__Class* get_class() {
            return il2cpp::get_nested_class<app::TransformAnimatorSystem_ObjectState__Class>(type_info(), "Moon.Timeline", "TransformAnimatorSystem", "ObjectState");
        }
        inline app::TransformAnimatorSystem_ObjectState* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem_ObjectState>(get_class());
        }
        inline app::TransformAnimatorSystem_ObjectState__Array* create_array(int size) {
            return il2cpp::array_new<app::TransformAnimatorSystem_ObjectState__Array>(get_class(), size);
        }
        inline app::TransformAnimatorSystem_ObjectState__Array* create_array(const std::vector<app::TransformAnimatorSystem_ObjectState*>& items) {
            return il2cpp::array_new<app::TransformAnimatorSystem_ObjectState__Array>(get_class(), items);
        }
    } // namespace TransformAnimatorSystem_ObjectState
} // namespace app::classes::types
