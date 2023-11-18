#pragma once
#include <Modloader/app/structs/GenericPrincipal.h>
#include <Modloader/app/structs/GenericPrincipal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericPrincipal {
        inline app::GenericPrincipal__Class** type_info() {
            static app::GenericPrincipal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericPrincipal__Class**)(modloader::win::memory::resolve_rva(0x04783ED8));
            }
            return cache;
        }
        inline app::GenericPrincipal__Class* get_class() {
            return il2cpp::get_class<app::GenericPrincipal__Class>(type_info(), "System.Security.Principal", "GenericPrincipal");
        }
        inline app::GenericPrincipal* create() {
            return il2cpp::create_object<app::GenericPrincipal>(get_class());
        }
    } // namespace GenericPrincipal
} // namespace app::classes::types
