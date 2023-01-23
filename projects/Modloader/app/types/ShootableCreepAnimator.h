#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShootableCreepAnimator__Class.h>
#include <Modloader/app/structs/ShootableCreepAnimator.h>

namespace app::classes::types {
    namespace ShootableCreepAnimator {
        inline app::ShootableCreepAnimator__Class** type_info = (app::ShootableCreepAnimator__Class**)(modloader::win::memory::resolve_rva(0x04705B78));
        inline app::ShootableCreepAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShootableCreepAnimator__Class>(type_info, "", "ShootableCreepAnimator");
        }
        inline app::ShootableCreepAnimator* create() {
            return il2cpp::create_object<app::ShootableCreepAnimator>(get_class());
        }
    } // namespace ShootableCreepAnimator
} // namespace app::classes::types
