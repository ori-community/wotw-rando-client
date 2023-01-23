#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AuthenticationException__Class.h>
#include <Modloader/app/structs/AuthenticationException.h>

namespace app::classes::types {
    namespace AuthenticationException {
        inline app::AuthenticationException__Class** type_info = (app::AuthenticationException__Class**)(modloader::win::memory::resolve_rva(0x04708C58));
        inline app::AuthenticationException__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationException__Class>(type_info, "System.Security.Authentication", "AuthenticationException");
        }
        inline app::AuthenticationException* create() {
            return il2cpp::create_object<app::AuthenticationException>(get_class());
        }
    } // namespace AuthenticationException
} // namespace app::classes::types
