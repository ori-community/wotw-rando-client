#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugRendererSettings_ColliderType__Enum__Class.h>
#include <Modloader/app/structs/DebugRendererSettings_ColliderType__Enum.h>

namespace app::classes::types {
    namespace DebugRendererSettings_ColliderType__Enum {
        namespace {
            inline app::DebugRendererSettings_ColliderType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DebugRendererSettings_ColliderType__Enum__Class** type_info = &type_info_ref;
        inline app::DebugRendererSettings_ColliderType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugRendererSettings_ColliderType__Enum__Class>(type_info, "", "DebugRendererSettings", "ColliderType");
        }
        inline app::DebugRendererSettings_ColliderType__Enum* create() {
            return il2cpp::create_object<app::DebugRendererSettings_ColliderType__Enum>(get_class());
        }
    } // namespace DebugRendererSettings_ColliderType__Enum
} // namespace app::classes::types
