#pragma once
#include <Modloader/app/structs/OidGroup__Enum.h>
#include <Modloader/app/structs/OidGroup__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OidGroup__Enum {
        inline app::OidGroup__Enum__Class** type_info() {
            static app::OidGroup__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OidGroup__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OidGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::OidGroup__Enum__Class>(type_info(), "System.Security.Cryptography", "OidGroup");
        }
        inline app::OidGroup__Enum* create() {
            return il2cpp::create_object<app::OidGroup__Enum>(get_class());
        }
    } // namespace OidGroup__Enum
} // namespace app::classes::types
