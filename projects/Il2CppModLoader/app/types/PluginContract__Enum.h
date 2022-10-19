#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
