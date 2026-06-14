#pragma once
#include <Modloader/app/structs/SceneRTAllocationPolicy__Enum.h>
#include <Modloader/app/structs/SceneRTAllocationPolicy__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneRTAllocationPolicy__Enum {
        inline app::SceneRTAllocationPolicy__Enum__Class** type_info() {
            static app::SceneRTAllocationPolicy__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneRTAllocationPolicy__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneRTAllocationPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneRTAllocationPolicy__Enum__Class>(type_info(), "Moon.Rendering", "SceneRTAllocationPolicy");
        }
        inline app::SceneRTAllocationPolicy__Enum* create() {
            return il2cpp::create_object<app::SceneRTAllocationPolicy__Enum>(get_class());
        }
    } // namespace SceneRTAllocationPolicy__Enum
} // namespace app::classes::types
