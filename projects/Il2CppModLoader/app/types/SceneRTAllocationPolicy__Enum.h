#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneRTAllocationPolicy__Enum {
        namespace {
            app::SceneRTAllocationPolicy__Enum__Class* type_info_ref = nullptr;
        }
        app::SceneRTAllocationPolicy__Enum__Class** type_info = &type_info_ref;
        inline app::SceneRTAllocationPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneRTAllocationPolicy__Enum__Class>(type_info, "Moon.Rendering", "SceneRTAllocationPolicy");
        }
        inline app::SceneRTAllocationPolicy__Enum* create() {
            return il2cpp::create_object<app::SceneRTAllocationPolicy__Enum>(get_class());
        }
    } // namespace SceneRTAllocationPolicy__Enum
} // namespace app::classes::types
