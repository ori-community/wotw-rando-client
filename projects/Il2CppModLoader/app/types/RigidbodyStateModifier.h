#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyStateModifier {
        namespace {
            app::RigidbodyStateModifier__Class* type_info_ref = nullptr;
        }
        app::RigidbodyStateModifier__Class** type_info = &type_info_ref;
        inline app::RigidbodyStateModifier__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyStateModifier__Class>(type_info, "", "RigidbodyStateModifier");
        }
        inline app::RigidbodyStateModifier* create() {
            return il2cpp::create_object<app::RigidbodyStateModifier>(get_class());
        }
    } // namespace RigidbodyStateModifier
} // namespace app::classes::types
