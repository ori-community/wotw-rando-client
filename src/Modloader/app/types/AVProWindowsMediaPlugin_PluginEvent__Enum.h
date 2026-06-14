#pragma once
#include <Modloader/app/structs/AVProWindowsMediaPlugin_PluginEvent__Enum.h>
#include <Modloader/app/structs/AVProWindowsMediaPlugin_PluginEvent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaPlugin_PluginEvent__Enum {
        inline app::AVProWindowsMediaPlugin_PluginEvent__Enum__Class** type_info() {
            static app::AVProWindowsMediaPlugin_PluginEvent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AVProWindowsMediaPlugin_PluginEvent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AVProWindowsMediaPlugin_PluginEvent__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AVProWindowsMediaPlugin_PluginEvent__Enum__Class>(type_info(), "", "AVProWindowsMediaPlugin", "PluginEvent");
        }
        inline app::AVProWindowsMediaPlugin_PluginEvent__Enum* create() {
            return il2cpp::create_object<app::AVProWindowsMediaPlugin_PluginEvent__Enum>(get_class());
        }
    } // namespace AVProWindowsMediaPlugin_PluginEvent__Enum
} // namespace app::classes::types
