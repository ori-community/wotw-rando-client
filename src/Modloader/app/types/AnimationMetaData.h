#pragma once
#include <Modloader/app/structs/AnimationMetaData.h>
#include <Modloader/app/structs/AnimationMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaData {
        inline app::AnimationMetaData__Class** type_info() {
            static app::AnimationMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationMetaData__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaData__Class>(type_info(), "", "AnimationMetaData");
        }
        inline app::AnimationMetaData* create() {
            return il2cpp::create_object<app::AnimationMetaData>(get_class());
        }
    } // namespace AnimationMetaData
} // namespace app::classes::types
