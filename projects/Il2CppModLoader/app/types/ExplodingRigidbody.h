#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExplodingRigidbody {
        namespace {
            app::ExplodingRigidbody__Class* type_info_ref = nullptr;
        }
        app::ExplodingRigidbody__Class** type_info = &type_info_ref;
        inline app::ExplodingRigidbody__Class* get_class() {
            return il2cpp::get_class<app::ExplodingRigidbody__Class>(type_info, "", "ExplodingRigidbody");
        }
        inline app::ExplodingRigidbody* create() {
            return il2cpp::create_object<app::ExplodingRigidbody>(get_class());
        }
    } // namespace ExplodingRigidbody
} // namespace app::classes::types
