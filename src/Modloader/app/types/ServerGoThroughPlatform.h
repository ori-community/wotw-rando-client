#pragma once
#include <Modloader/app/structs/ServerGoThroughPlatform.h>
#include <Modloader/app/structs/ServerGoThroughPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerGoThroughPlatform {
        inline app::ServerGoThroughPlatform__Class** type_info() {
            static app::ServerGoThroughPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerGoThroughPlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerGoThroughPlatform__Class* get_class() {
            return il2cpp::get_class<app::ServerGoThroughPlatform__Class>(type_info(), "", "ServerGoThroughPlatform");
        }
        inline app::ServerGoThroughPlatform* create() {
            return il2cpp::create_object<app::ServerGoThroughPlatform>(get_class());
        }
    } // namespace ServerGoThroughPlatform
} // namespace app::classes::types
