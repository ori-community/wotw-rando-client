#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PluginContract__Enum__Class.h>
#include <Modloader/app/structs/PluginContract__Enum.h>

namespace app::classes::types {
    namespace PluginContract__Enum {
        namespace {
            inline app::PluginContract__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PluginContract__Enum__Class** type_info = &type_info_ref;
        inline app::PluginContract__Enum__Class* get_class() {
            return il2cpp::get_class<app::PluginContract__Enum__Class>(type_info, "PlayFab", "PluginContract");
        }
        inline app::PluginContract__Enum* create() {
            return il2cpp::create_object<app::PluginContract__Enum>(get_class());
        }
    } // namespace PluginContract__Enum
} // namespace app::classes::types
