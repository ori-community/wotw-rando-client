#pragma once
#include <Modloader/app/structs/AnimationCurve_DirectConverter.h>
#include <Modloader/app/structs/AnimationCurve_DirectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationCurve_DirectConverter {
        inline app::AnimationCurve_DirectConverter__Class** type_info() {
            static app::AnimationCurve_DirectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationCurve_DirectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationCurve_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::AnimationCurve_DirectConverter__Class>(type_info(), "FullSerializer.Internal.DirectConverters", "AnimationCurve_DirectConverter");
        }
        inline app::AnimationCurve_DirectConverter* create() {
            return il2cpp::create_object<app::AnimationCurve_DirectConverter>(get_class());
        }
    } // namespace AnimationCurve_DirectConverter
} // namespace app::classes::types
