#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossBeamAttackBehaviour_c {
        inline app::LaserShooterMinibossBeamAttackBehaviour_c__Class** type_info = (app::LaserShooterMinibossBeamAttackBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04777E18));
        inline app::LaserShooterMinibossBeamAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShooterMinibossBeamAttackBehaviour_c__Class>(type_info, "", "LaserShooterMinibossBeamAttackBehaviour", "<>c");
        }
        inline app::LaserShooterMinibossBeamAttackBehaviour_c* create() {
            return il2cpp::create_object<app::LaserShooterMinibossBeamAttackBehaviour_c>(get_class());
        }
    } // namespace LaserShooterMinibossBeamAttackBehaviour_c
} // namespace app::classes::types
