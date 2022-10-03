#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugIdleAggroBehaviour {
        namespace {
            app::SneezeSlugIdleAggroBehaviour__Class* type_info_ref = nullptr;
        }
        app::SneezeSlugIdleAggroBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugIdleAggroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugIdleAggroBehaviour__Class>(type_info, "", "SneezeSlugIdleAggroBehaviour");
        }
        inline app::SneezeSlugIdleAggroBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugIdleAggroBehaviour>(get_class());
        }
    } // namespace SneezeSlugIdleAggroBehaviour
} // namespace app::classes::types
