#pragma once
#include <Modloader/app/structs/DebugRendererSettings_SettingsPattern__Array.h>
#include <Modloader/app/structs/DebugRendererSettings_SettingsPattern__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugRendererSettings_SettingsPattern__Array {
        inline app::DebugRendererSettings_SettingsPattern__Array__Class** type_info() {
            static app::DebugRendererSettings_SettingsPattern__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugRendererSettings_SettingsPattern__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugRendererSettings_SettingsPattern__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugRendererSettings_SettingsPattern__Array__Class>(type_info(), "", "DebugRendererSettings+SettingsPattern[]");
        }
        inline app::DebugRendererSettings_SettingsPattern__Array* create() {
            return il2cpp::create_object<app::DebugRendererSettings_SettingsPattern__Array>(get_class());
        }
    } // namespace DebugRendererSettings_SettingsPattern__Array
} // namespace app::classes::types
