#pragma once
#include <Modloader/app/structs/PassiveStateVolitileOverrideAnimator.h>
#include <Modloader/app/structs/PassiveStateVolitileOverrideAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PassiveStateVolitileOverrideAnimator {
        inline app::PassiveStateVolitileOverrideAnimator__Class** type_info() {
            static app::PassiveStateVolitileOverrideAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PassiveStateVolitileOverrideAnimator__Class**)(modloader::win::memory::resolve_rva(0x04718808));
            }
            return cache;
        }
        inline app::PassiveStateVolitileOverrideAnimator__Class* get_class() {
            return il2cpp::get_class<app::PassiveStateVolitileOverrideAnimator__Class>(type_info(), "Moon.Timeline", "PassiveStateVolitileOverrideAnimator");
        }
        inline app::PassiveStateVolitileOverrideAnimator* create() {
            return il2cpp::create_object<app::PassiveStateVolitileOverrideAnimator>(get_class());
        }
    } // namespace PassiveStateVolitileOverrideAnimator
} // namespace app::classes::types
