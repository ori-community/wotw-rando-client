#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorParallelUpdater_AnimatorState {
        namespace {
            inline app::MoonAnimatorParallelUpdater_AnimatorState__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Class** type_info = &type_info_ref;
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimatorParallelUpdater_AnimatorState__Class>(type_info, "Moon", "MoonAnimatorParallelUpdater", "AnimatorState");
        }
        inline app::MoonAnimatorParallelUpdater_AnimatorState* create() {
            return il2cpp::create_object<app::MoonAnimatorParallelUpdater_AnimatorState>(get_class());
        }
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Boxed* box(app::MoonAnimatorParallelUpdater_AnimatorState value) {
            return il2cpp::box_value<app::MoonAnimatorParallelUpdater_AnimatorState__Boxed>(get_class(), value);
        }
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimatorParallelUpdater_AnimatorState__Array>(get_class(), size);
        }
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array* create_array(const std::vector<app::MoonAnimatorParallelUpdater_AnimatorState>& items) {
            return il2cpp::array_new<app::MoonAnimatorParallelUpdater_AnimatorState__Array>(get_class(), items);
        }
    } // namespace MoonAnimatorParallelUpdater_AnimatorState
} // namespace app::classes::types
