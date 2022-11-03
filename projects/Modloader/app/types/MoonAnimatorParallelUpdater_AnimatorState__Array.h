#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorParallelUpdater_AnimatorState__Array {
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class** type_info = (app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class**)(modloader::win::memory::resolve_rva(0x04788CD8));
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class>(type_info, "Moon", "MoonAnimatorParallelUpdater+AnimatorState[]");
        }
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array* create() {
            return il2cpp::create_object<app::MoonAnimatorParallelUpdater_AnimatorState__Array>(get_class());
        }
    } // namespace MoonAnimatorParallelUpdater_AnimatorState__Array
} // namespace app::classes::types
