#pragma once
#include <Modloader/app/structs/DebugRendererSettings_ColliderType__Enum.h>
#include <Modloader/app/structs/DebugRendererSettings_ColliderType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugRendererSettings_ColliderType__Enum {
        inline app::DebugRendererSettings_ColliderType__Enum__Class** type_info() {
            static app::DebugRendererSettings_ColliderType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugRendererSettings_ColliderType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugRendererSettings_ColliderType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugRendererSettings_ColliderType__Enum__Class>(type_info(), "", "DebugRendererSettings", "ColliderType");
        }
        inline app::DebugRendererSettings_ColliderType__Enum* create() {
            return il2cpp::create_object<app::DebugRendererSettings_ColliderType__Enum>(get_class());
        }
    } // namespace DebugRendererSettings_ColliderType__Enum
} // namespace app::classes::types
