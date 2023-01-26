#pragma once
#include <Modloader/app/structs/TokenBinding.h>
#include <Modloader/app/structs/TokenBinding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TokenBinding {
        inline app::TokenBinding__Class** type_info() {
            static app::TokenBinding__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TokenBinding__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TokenBinding__Class* get_class() {
            return il2cpp::get_class<app::TokenBinding__Class>(type_info(), "System.Security.Authentication.ExtendedProtection", "TokenBinding");
        }
        inline app::TokenBinding* create() {
            return il2cpp::create_object<app::TokenBinding>(get_class());
        }
    } // namespace TokenBinding
} // namespace app::classes::types
