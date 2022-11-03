#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TreeKeeperEntity {
        namespace {
            inline app::TreeKeeperEntity__Class* type_info_ref = nullptr;
        }
        inline app::TreeKeeperEntity__Class** type_info = &type_info_ref;
        inline app::TreeKeeperEntity__Class* get_class() {
            return il2cpp::get_class<app::TreeKeeperEntity__Class>(type_info, "", "TreeKeeperEntity");
        }
        inline app::TreeKeeperEntity* create() {
            return il2cpp::create_object<app::TreeKeeperEntity>(get_class());
        }
    } // namespace TreeKeeperEntity
} // namespace app::classes::types
