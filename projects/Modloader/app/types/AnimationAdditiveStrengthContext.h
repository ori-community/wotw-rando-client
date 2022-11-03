#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationAdditiveStrengthContext {
        inline app::AnimationAdditiveStrengthContext__Class** type_info = (app::AnimationAdditiveStrengthContext__Class**)(modloader::win::memory::resolve_rva(0x0475B890));
        inline app::AnimationAdditiveStrengthContext__Class* get_class() {
            return il2cpp::get_class<app::AnimationAdditiveStrengthContext__Class>(type_info, "Moon", "AnimationAdditiveStrengthContext");
        }
        inline app::AnimationAdditiveStrengthContext* create() {
            return il2cpp::create_object<app::AnimationAdditiveStrengthContext>(get_class());
        }
    } // namespace AnimationAdditiveStrengthContext
} // namespace app::classes::types
