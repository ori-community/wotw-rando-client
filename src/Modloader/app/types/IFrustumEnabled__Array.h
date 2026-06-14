#pragma once
#include <Modloader/app/structs/IFrustumEnabled__Array.h>
#include <Modloader/app/structs/IFrustumEnabled__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFrustumEnabled__Array {
        inline app::IFrustumEnabled__Array__Class** type_info() {
            static app::IFrustumEnabled__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IFrustumEnabled__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IFrustumEnabled__Array__Class* get_class() {
            return il2cpp::get_class<app::IFrustumEnabled__Array__Class>(type_info(), "Game", "IFrustumEnabled[]");
        }
        inline app::IFrustumEnabled__Array* create() {
            return il2cpp::create_object<app::IFrustumEnabled__Array>(get_class());
        }
    } // namespace IFrustumEnabled__Array
} // namespace app::classes::types
