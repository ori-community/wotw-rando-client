#pragma once
#include <Modloader/app/structs/ShootableCreepAnimator.h>
#include <Modloader/app/structs/ShootableCreepAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootableCreepAnimator {
        inline app::ShootableCreepAnimator__Class** type_info() {
            static app::ShootableCreepAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShootableCreepAnimator__Class**)(modloader::win::memory::resolve_rva(0x04705B78));
            }
            return cache;
        }
        inline app::ShootableCreepAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShootableCreepAnimator__Class>(type_info(), "", "ShootableCreepAnimator");
        }
        inline app::ShootableCreepAnimator* create() {
            return il2cpp::create_object<app::ShootableCreepAnimator>(get_class());
        }
    } // namespace ShootableCreepAnimator
} // namespace app::classes::types
