#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_ObjectState {
        inline app::TransformAnimatorSystem_ObjectState__Class** type_info = (app::TransformAnimatorSystem_ObjectState__Class**)(modloader::win::memory::resolve_rva(0x04752DC8));
        inline app::TransformAnimatorSystem_ObjectState__Class* get_class() {
            return il2cpp::get_nested_class<app::TransformAnimatorSystem_ObjectState__Class>(type_info, "Moon.Timeline", "TransformAnimatorSystem", "ObjectState");
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
