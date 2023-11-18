#pragma once
#include <Modloader/app/structs/RedirectionPortal.h>
#include <Modloader/app/structs/RedirectionPortal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RedirectionPortal {
        inline app::RedirectionPortal__Class** type_info() {
            static app::RedirectionPortal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RedirectionPortal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RedirectionPortal__Class* get_class() {
            return il2cpp::get_class<app::RedirectionPortal__Class>(type_info(), "", "RedirectionPortal");
        }
        inline app::RedirectionPortal* create() {
            return il2cpp::create_object<app::RedirectionPortal>(get_class());
        }
    } // namespace RedirectionPortal
} // namespace app::classes::types
