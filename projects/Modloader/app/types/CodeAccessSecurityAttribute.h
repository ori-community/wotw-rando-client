#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CodeAccessSecurityAttribute__Class.h>
#include <Modloader/app/structs/CodeAccessSecurityAttribute.h>

namespace app::classes::types {
    namespace CodeAccessSecurityAttribute {
        namespace {
            inline app::CodeAccessSecurityAttribute__Class* type_info_ref = nullptr;
        }
        inline app::CodeAccessSecurityAttribute__Class** type_info = &type_info_ref;
        inline app::CodeAccessSecurityAttribute__Class* get_class() {
            return il2cpp::get_class<app::CodeAccessSecurityAttribute__Class>(type_info, "System.Security.Permissions", "CodeAccessSecurityAttribute");
        }
        inline app::CodeAccessSecurityAttribute* create() {
            return il2cpp::create_object<app::CodeAccessSecurityAttribute>(get_class());
        }
    } // namespace CodeAccessSecurityAttribute
} // namespace app::classes::types
