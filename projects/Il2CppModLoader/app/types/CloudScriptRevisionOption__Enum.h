#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CloudScriptRevisionOption__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CloudScriptRevisionOption__Enum__Class** type_info;
        inline app::CloudScriptRevisionOption__Enum__Class* get_class() {
            return il2cpp::get_class<app::CloudScriptRevisionOption__Enum__Class>(type_info, "PlayFab.ClientModels", "CloudScriptRevisionOption");
        }
        inline app::CloudScriptRevisionOption__Enum* create() {
            return il2cpp::create_object<app::CloudScriptRevisionOption__Enum>(get_class());
        }
    } // namespace CloudScriptRevisionOption__Enum
} // namespace app::classes::types
