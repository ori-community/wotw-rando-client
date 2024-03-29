#pragma once
#include <Modloader/app/structs/AnimationMetaDataCurveProcessor.h>
#include <Modloader/app/structs/AnimationMetaDataCurveProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaDataCurveProcessor {
        inline app::AnimationMetaDataCurveProcessor__Class** type_info() {
            static app::AnimationMetaDataCurveProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationMetaDataCurveProcessor__Class**)(modloader::win::memory::resolve_rva(0x04749D90));
            }
            return cache;
        }
        inline app::AnimationMetaDataCurveProcessor__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaDataCurveProcessor__Class>(type_info(), "", "AnimationMetaDataCurveProcessor");
        }
        inline app::AnimationMetaDataCurveProcessor* create() {
            return il2cpp::create_object<app::AnimationMetaDataCurveProcessor>(get_class());
        }
    } // namespace AnimationMetaDataCurveProcessor
} // namespace app::classes::types
