#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OriGhostRigVisuals__Class.h>
#include <Modloader/app/structs/OriGhostRigVisuals.h>

namespace app::classes::types {
    namespace OriGhostRigVisuals {
        namespace {
            inline app::OriGhostRigVisuals__Class* type_info_ref = nullptr;
        }
        inline app::OriGhostRigVisuals__Class** type_info = &type_info_ref;
        inline app::OriGhostRigVisuals__Class* get_class() {
            return il2cpp::get_class<app::OriGhostRigVisuals__Class>(type_info, "", "OriGhostRigVisuals");
        }
        inline app::OriGhostRigVisuals* create() {
            return il2cpp::create_object<app::OriGhostRigVisuals>(get_class());
        }
    } // namespace OriGhostRigVisuals
} // namespace app::classes::types
