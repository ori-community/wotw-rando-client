#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TokenBinding {
        namespace {
            inline app::TokenBinding__Class* type_info_ref = nullptr;
        }
        inline app::TokenBinding__Class** type_info = &type_info_ref;
        inline app::TokenBinding__Class* get_class() {
            return il2cpp::get_class<app::TokenBinding__Class>(type_info, "System.Security.Authentication.ExtendedProtection", "TokenBinding");
        }
        inline app::TokenBinding* create() {
            return il2cpp::create_object<app::TokenBinding>(get_class());
        }
    } // namespace TokenBinding
} // namespace app::classes::types
