#pragma once
#include <Modloader/app/structs/PluginContract__Enum.h>
#include <Modloader/app/structs/PluginContract__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PluginContract__Enum {
        inline app::PluginContract__Enum__Class** type_info() {
            static app::PluginContract__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PluginContract__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PluginContract__Enum__Class* get_class() {
            return il2cpp::get_class<app::PluginContract__Enum__Class>(type_info(), "PlayFab", "PluginContract");
        }
        inline app::PluginContract__Enum* create() {
            return il2cpp::create_object<app::PluginContract__Enum>(get_class());
        }
    } // namespace PluginContract__Enum
} // namespace app::classes::types
