#pragma once
#include <Modloader/app/structs/CloudScriptRevisionOption__Enum_1.h>
#include <Modloader/app/structs/CloudScriptRevisionOption__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CloudScriptRevisionOption__Enum_1 {
        inline app::CloudScriptRevisionOption__Enum_1__Class** type_info() {
            static app::CloudScriptRevisionOption__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CloudScriptRevisionOption__Enum_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CloudScriptRevisionOption__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::CloudScriptRevisionOption__Enum_1__Class>(type_info(), "PlayFab.CloudScriptModels", "CloudScriptRevisionOption");
        }
        inline app::CloudScriptRevisionOption__Enum_1* create() {
            return il2cpp::create_object<app::CloudScriptRevisionOption__Enum_1>(get_class());
        }
    } // namespace CloudScriptRevisionOption__Enum_1
} // namespace app::classes::types
