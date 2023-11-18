#pragma once
#include <Modloader/app/structs/IPrincipal.h>
#include <Modloader/app/structs/IPrincipal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPrincipal {
        inline app::IPrincipal__Class** type_info() {
            static app::IPrincipal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPrincipal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPrincipal__Class* get_class() {
            return il2cpp::get_class<app::IPrincipal__Class>(type_info(), "System.Security.Principal", "IPrincipal");
        }
    } // namespace IPrincipal
} // namespace app::classes::types
