#pragma once
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData.h>
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData__Array.h>
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData__Boxed.h>
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimatorPostprocessData {
        inline app::MoonAnimator_AnimatorPostprocessData__Class** type_info() {
            static app::MoonAnimator_AnimatorPostprocessData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimator_AnimatorPostprocessData__Class**)(modloader::win::memory::resolve_rva(0x04797C00));
            }
            return cache;
        }
        inline app::MoonAnimator_AnimatorPostprocessData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimatorPostprocessData__Class>(type_info(), "Moon", "MoonAnimator", "AnimatorPostprocessData");
        }
        inline app::MoonAnimator_AnimatorPostprocessData* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimatorPostprocessData>(get_class());
        }
        inline app::MoonAnimator_AnimatorPostprocessData__Boxed* box(app::MoonAnimator_AnimatorPostprocessData value) {
            return il2cpp::box_value<app::MoonAnimator_AnimatorPostprocessData__Boxed>(get_class(), value);
        }
        inline app::MoonAnimator_AnimatorPostprocessData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_AnimatorPostprocessData__Array>(get_class(), size);
        }
        inline app::MoonAnimator_AnimatorPostprocessData__Array* create_array(const std::vector<app::MoonAnimator_AnimatorPostprocessData>& items) {
            return il2cpp::array_new<app::MoonAnimator_AnimatorPostprocessData__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_AnimatorPostprocessData
} // namespace app::classes::types
