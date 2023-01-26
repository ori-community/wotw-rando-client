#pragma once
#include <Modloader/app/structs/RigidbodyInertiaModifier.h>
#include <Modloader/app/structs/RigidbodyInertiaModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInertiaModifier {
        inline app::RigidbodyInertiaModifier__Class** type_info() {
            static app::RigidbodyInertiaModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyInertiaModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyInertiaModifier__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyInertiaModifier__Class>(type_info(), "", "RigidbodyInertiaModifier");
        }
        inline app::RigidbodyInertiaModifier* create() {
            return il2cpp::create_object<app::RigidbodyInertiaModifier>(get_class());
        }
    } // namespace RigidbodyInertiaModifier
} // namespace app::classes::types
