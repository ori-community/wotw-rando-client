#pragma once
#include <Modloader/app/structs/AkPluginType__Enum.h>
#include <Modloader/app/structs/AkPluginType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkPluginType__Enum {
        inline app::AkPluginType__Enum__Class** type_info() {
            static app::AkPluginType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkPluginType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkPluginType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkPluginType__Enum__Class>(type_info(), "", "AkPluginType");
        }
        inline app::AkPluginType__Enum* create() {
            return il2cpp::create_object<app::AkPluginType__Enum>(get_class());
        }
    } // namespace AkPluginType__Enum
} // namespace app::classes::types
