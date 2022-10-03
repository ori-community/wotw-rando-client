#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Inertia {
        namespace {
            app::Inertia__Class* type_info_ref = nullptr;
        }
        app::Inertia__Class** type_info = &type_info_ref;
        inline app::Inertia__Class* get_class() {
            return il2cpp::get_class<app::Inertia__Class>(type_info, "RootMotion.FinalIK", "Inertia");
        }
        inline app::Inertia* create() {
            return il2cpp::create_object<app::Inertia>(get_class());
        }
    } // namespace Inertia
} // namespace app::classes::types
