#pragma once
#include <Modloader/app/structs/AnimatorPostprocessUpdateData.h>
#include <Modloader/app/structs/AnimatorPostprocessUpdateData__Boxed.h>
#include <Modloader/app/structs/AnimatorPostprocessUpdateData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorPostprocessUpdateData {
        inline app::AnimatorPostprocessUpdateData__Class** type_info() {
            static app::AnimatorPostprocessUpdateData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorPostprocessUpdateData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorPostprocessUpdateData__Class* get_class() {
            return il2cpp::get_class<app::AnimatorPostprocessUpdateData__Class>(type_info(), "Moon", "AnimatorPostprocessUpdateData");
        }
        inline app::AnimatorPostprocessUpdateData* create() {
            return il2cpp::create_object<app::AnimatorPostprocessUpdateData>(get_class());
        }
        inline app::AnimatorPostprocessUpdateData__Boxed* box(app::AnimatorPostprocessUpdateData value) {
            return il2cpp::box_value<app::AnimatorPostprocessUpdateData__Boxed>(get_class(), value);
        }
    } // namespace AnimatorPostprocessUpdateData
} // namespace app::classes::types
