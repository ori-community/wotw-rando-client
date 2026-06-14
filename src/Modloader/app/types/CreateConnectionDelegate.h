#pragma once
#include <Modloader/app/structs/CreateConnectionDelegate.h>
#include <Modloader/app/structs/CreateConnectionDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateConnectionDelegate {
        inline app::CreateConnectionDelegate__Class** type_info() {
            static app::CreateConnectionDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreateConnectionDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreateConnectionDelegate__Class* get_class() {
            return il2cpp::get_class<app::CreateConnectionDelegate__Class>(type_info(), "System.Net", "CreateConnectionDelegate");
        }
        inline app::CreateConnectionDelegate* create() {
            return il2cpp::create_object<app::CreateConnectionDelegate>(get_class());
        }
    } // namespace CreateConnectionDelegate
} // namespace app::classes::types
