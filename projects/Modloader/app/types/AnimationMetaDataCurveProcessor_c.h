#pragma once
#include <Modloader/app/structs/AnimationMetaDataCurveProcessor_c.h>
#include <Modloader/app/structs/AnimationMetaDataCurveProcessor_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaDataCurveProcessor_c {
        inline app::AnimationMetaDataCurveProcessor_c__Class** type_info() {
            static app::AnimationMetaDataCurveProcessor_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationMetaDataCurveProcessor_c__Class**)(modloader::win::memory::resolve_rva(0x04761888));
            }
            return cache;
        }
        inline app::AnimationMetaDataCurveProcessor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMetaDataCurveProcessor_c__Class>(type_info(), "", "AnimationMetaDataCurveProcessor", "<>c");
        }
        inline app::AnimationMetaDataCurveProcessor_c* create() {
            return il2cpp::create_object<app::AnimationMetaDataCurveProcessor_c>(get_class());
        }
    } // namespace AnimationMetaDataCurveProcessor_c
} // namespace app::classes::types
