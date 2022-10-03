#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationCurve_DirectConverter {
        namespace {
            app::AnimationCurve_DirectConverter__Class* type_info_ref = nullptr;
        }
        app::AnimationCurve_DirectConverter__Class** type_info = &type_info_ref;
        inline app::AnimationCurve_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::AnimationCurve_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "AnimationCurve_DirectConverter");
        }
        inline app::AnimationCurve_DirectConverter* create() {
            return il2cpp::create_object<app::AnimationCurve_DirectConverter>(get_class());
        }
    } // namespace AnimationCurve_DirectConverter
} // namespace app::classes::types
