#pragma once
#include <Modloader/app/structs/CloudScriptRevisionOption__Enum.h>
#include <Modloader/app/structs/CloudScriptRevisionOption__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CloudScriptRevisionOption__Enum {
        inline app::CloudScriptRevisionOption__Enum__Class** type_info() {
            static app::CloudScriptRevisionOption__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CloudScriptRevisionOption__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476EE28));
            }
            return cache;
        }
        inline app::CloudScriptRevisionOption__Enum__Class* get_class() {
            return il2cpp::get_class<app::CloudScriptRevisionOption__Enum__Class>(type_info(), "PlayFab.ClientModels", "CloudScriptRevisionOption");
        }
        inline app::CloudScriptRevisionOption__Enum* create() {
            return il2cpp::create_object<app::CloudScriptRevisionOption__Enum>(get_class());
        }
    } // namespace CloudScriptRevisionOption__Enum
} // namespace app::classes::types
