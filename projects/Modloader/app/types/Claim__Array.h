#pragma once
#include <Modloader/app/structs/Claim__Array.h>
#include <Modloader/app/structs/Claim__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Claim__Array {
        inline app::Claim__Array__Class** type_info() {
            static app::Claim__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Claim__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Claim__Array__Class* get_class() {
            return il2cpp::get_class<app::Claim__Array__Class>(type_info(), "System.Security.Claims", "Claim[]");
        }
        inline app::Claim__Array* create() {
            return il2cpp::create_object<app::Claim__Array>(get_class());
        }
    } // namespace Claim__Array
} // namespace app::classes::types
