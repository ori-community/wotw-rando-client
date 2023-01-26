#pragma once
#include <Modloader/app/structs/NetConfig.h>
#include <Modloader/app/structs/NetConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetConfig {
        inline app::NetConfig__Class** type_info() {
            static app::NetConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NetConfig__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NetConfig__Class* get_class() {
            return il2cpp::get_class<app::NetConfig__Class>(type_info(), "System.Net", "NetConfig");
        }
        inline app::NetConfig* create() {
            return il2cpp::create_object<app::NetConfig>(get_class());
        }
    } // namespace NetConfig
} // namespace app::classes::types
