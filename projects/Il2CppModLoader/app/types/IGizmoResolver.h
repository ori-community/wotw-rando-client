#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGizmoResolver {
        namespace {
            app::IGizmoResolver__Class* type_info_ref = nullptr;
        }
        app::IGizmoResolver__Class** type_info = &type_info_ref;
        inline app::IGizmoResolver__Class* get_class() {
            return il2cpp::get_class<app::IGizmoResolver__Class>(type_info, "", "IGizmoResolver");
        }
        inline app::IGizmoResolver* create() {
            return il2cpp::create_object<app::IGizmoResolver>(get_class());
        }
    } // namespace IGizmoResolver
} // namespace app::classes::types
