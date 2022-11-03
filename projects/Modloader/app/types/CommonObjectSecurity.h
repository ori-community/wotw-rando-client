#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CommonObjectSecurity {
        namespace {
            inline app::CommonObjectSecurity__Class* type_info_ref = nullptr;
        }
        inline app::CommonObjectSecurity__Class** type_info = &type_info_ref;
        inline app::CommonObjectSecurity__Class* get_class() {
            return il2cpp::get_class<app::CommonObjectSecurity__Class>(type_info, "System.Security.AccessControl", "CommonObjectSecurity");
        }
        inline app::CommonObjectSecurity* create() {
            return il2cpp::create_object<app::CommonObjectSecurity>(get_class());
        }
    } // namespace CommonObjectSecurity
} // namespace app::classes::types
