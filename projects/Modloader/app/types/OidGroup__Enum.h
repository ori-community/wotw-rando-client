#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OidGroup__Enum__Class.h>
#include <Modloader/app/structs/OidGroup__Enum.h>

namespace app::classes::types {
    namespace OidGroup__Enum {
        namespace {
            inline app::OidGroup__Enum__Class* type_info_ref = nullptr;
        }
        inline app::OidGroup__Enum__Class** type_info = &type_info_ref;
        inline app::OidGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::OidGroup__Enum__Class>(type_info, "System.Security.Cryptography", "OidGroup");
        }
        inline app::OidGroup__Enum* create() {
            return il2cpp::create_object<app::OidGroup__Enum>(get_class());
        }
    } // namespace OidGroup__Enum
} // namespace app::classes::types
