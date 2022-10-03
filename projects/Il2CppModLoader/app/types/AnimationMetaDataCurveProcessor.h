#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaDataCurveProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationMetaDataCurveProcessor__Class** type_info;
        inline app::AnimationMetaDataCurveProcessor__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaDataCurveProcessor__Class>(type_info, "", "AnimationMetaDataCurveProcessor");
        }
        inline app::AnimationMetaDataCurveProcessor* create() {
            return il2cpp::create_object<app::AnimationMetaDataCurveProcessor>(get_class());
        }
    } // namespace AnimationMetaDataCurveProcessor
} // namespace app::classes::types
