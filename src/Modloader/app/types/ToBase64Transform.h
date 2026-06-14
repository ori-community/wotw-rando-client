#pragma once
#include <Modloader/app/structs/ToBase64Transform.h>
#include <Modloader/app/structs/ToBase64Transform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToBase64Transform {
        inline app::ToBase64Transform__Class** type_info() {
            static app::ToBase64Transform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ToBase64Transform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ToBase64Transform__Class* get_class() {
            return il2cpp::get_class<app::ToBase64Transform__Class>(type_info(), "System.Security.Cryptography", "ToBase64Transform");
        }
        inline app::ToBase64Transform* create() {
            return il2cpp::create_object<app::ToBase64Transform>(get_class());
        }
    } // namespace ToBase64Transform
} // namespace app::classes::types
