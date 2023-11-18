#pragma once
#include <Modloader/app/structs/MoonAnimatorParallelUpdater_AnimatorState__Array.h>
#include <Modloader/app/structs/MoonAnimatorParallelUpdater_AnimatorState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorParallelUpdater_AnimatorState__Array {
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class** type_info() {
            static app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class**)(modloader::win::memory::resolve_rva(0x04788CD8));
            }
            return cache;
        }
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class>(type_info(), "Moon", "MoonAnimatorParallelUpdater+AnimatorState[]");
        }
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array* create() {
            return il2cpp::create_object<app::MoonAnimatorParallelUpdater_AnimatorState__Array>(get_class());
        }
    } // namespace MoonAnimatorParallelUpdater_AnimatorState__Array
} // namespace app::classes::types
