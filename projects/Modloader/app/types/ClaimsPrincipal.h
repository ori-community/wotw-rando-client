#pragma once
#include <Modloader/app/structs/ClaimsPrincipal.h>
#include <Modloader/app/structs/ClaimsPrincipal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClaimsPrincipal {
        inline app::ClaimsPrincipal__Class** type_info() {
            static app::ClaimsPrincipal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClaimsPrincipal__Class**)(modloader::win::memory::resolve_rva(0x04723C48));
            }
            return cache;
        }
        inline app::ClaimsPrincipal__Class* get_class() {
            return il2cpp::get_class<app::ClaimsPrincipal__Class>(type_info(), "System.Security.Claims", "ClaimsPrincipal");
        }
        inline app::ClaimsPrincipal* create() {
            return il2cpp::create_object<app::ClaimsPrincipal>(get_class());
        }
    } // namespace ClaimsPrincipal
} // namespace app::classes::types
