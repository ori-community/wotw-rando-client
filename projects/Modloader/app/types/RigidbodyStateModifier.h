#pragma once
#include <Modloader/app/structs/RigidbodyStateModifier.h>
#include <Modloader/app/structs/RigidbodyStateModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyStateModifier {
        inline app::RigidbodyStateModifier__Class** type_info() {
            static app::RigidbodyStateModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyStateModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyStateModifier__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyStateModifier__Class>(type_info(), "", "RigidbodyStateModifier");
        }
        inline app::RigidbodyStateModifier* create() {
            return il2cpp::create_object<app::RigidbodyStateModifier>(get_class());
        }
    } // namespace RigidbodyStateModifier
} // namespace app::classes::types
