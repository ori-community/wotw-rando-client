#pragma once
#include <Modloader/app/structs/ServerTransform.h>
#include <Modloader/app/structs/ServerTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerTransform {
        inline app::ServerTransform__Class** type_info() {
            static app::ServerTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerTransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerTransform__Class* get_class() {
            return il2cpp::get_class<app::ServerTransform__Class>(type_info(), "", "ServerTransform");
        }
        inline app::ServerTransform* create() {
            return il2cpp::create_object<app::ServerTransform>(get_class());
        }
    } // namespace ServerTransform
} // namespace app::classes::types
