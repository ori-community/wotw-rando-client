#pragma once
#include <Modloader/app/structs/FromBase64Transform.h>
#include <Modloader/app/structs/FromBase64Transform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FromBase64Transform {
        inline app::FromBase64Transform__Class** type_info() {
            static app::FromBase64Transform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FromBase64Transform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FromBase64Transform__Class* get_class() {
            return il2cpp::get_class<app::FromBase64Transform__Class>(type_info(), "System.Security.Cryptography", "FromBase64Transform");
        }
        inline app::FromBase64Transform* create() {
            return il2cpp::create_object<app::FromBase64Transform>(get_class());
        }
    } // namespace FromBase64Transform
} // namespace app::classes::types
