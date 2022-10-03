#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriGhostRigVisuals {
        namespace {
            app::OriGhostRigVisuals__Class* type_info_ref = nullptr;
        }
        app::OriGhostRigVisuals__Class** type_info = &type_info_ref;
        inline app::OriGhostRigVisuals__Class* get_class() {
            return il2cpp::get_class<app::OriGhostRigVisuals__Class>(type_info, "", "OriGhostRigVisuals");
        }
        inline app::OriGhostRigVisuals* create() {
            return il2cpp::create_object<app::OriGhostRigVisuals>(get_class());
        }
    } // namespace OriGhostRigVisuals
} // namespace app::classes::types
