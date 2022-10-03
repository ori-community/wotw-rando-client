#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TreeKeeperEntity {
        namespace {
            app::TreeKeeperEntity__Class* type_info_ref = nullptr;
        }
        app::TreeKeeperEntity__Class** type_info = &type_info_ref;
        inline app::TreeKeeperEntity__Class* get_class() {
            return il2cpp::get_class<app::TreeKeeperEntity__Class>(type_info, "", "TreeKeeperEntity");
        }
        inline app::TreeKeeperEntity* create() {
            return il2cpp::create_object<app::TreeKeeperEntity>(get_class());
        }
    } // namespace TreeKeeperEntity
} // namespace app::classes::types
